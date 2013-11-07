#include <QtGui>
#include <QtSql>
#include "customtimectrl.h"
#include "generictab.h"
#include "sql.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//! Set Source Text
/*! Here we format the header label, and fill its text according to the fact that it is
\par label pointer to a label
a sampling or a logbook form;
*/
void                                  setSourceText(QLabel* label, const bool bIsLogbook);

//////////////////////////////////////////////////////////////////////
#ifndef PREVIEWTAB_H
#define PREVIEWTAB_H

//////////////////////////////////////////////////////////////////////////////

//! Preview Tab Class
/*!
This class extends the Generic Tab to a more particular form, with a preview for inserted records;
*/

class PreviewTab : public GenericTab
{
    Q_OBJECT

    public:
        PreviewTab(const int index, RoleDef* inRoleDef, Sample* inSample, DateModel* inTDateTime, const QString inStrTitle, 
            RuleChecker* ruleCheckerPtr=0, QWidget *parent=0, Qt::WFlags flags=0);
        ~PreviewTab();

        //! Select in Table
        /*! This is a function, provided for the convenience of the file loader.
        It searches for a row in the table, with a certain id, and if it finds it (selects this row)!
        \par id record id (on the database) as an integer
          \return boolean indication if it found or not the record with this id
        */
        bool                                  tableSelect(const int id);
        //! Go to the next step
        /*! The next is the slot that actually passes the information to the next tab (and adds it
        if it is not visible), and therefore is crucial to the sampling process;
        if we just change tabs, we do not pass any information around: we must 
        press next to effectively navigate in the tree;
        */
        bool                                  next();
        //! Get New Header
        /*! This is a convenience function, to retrieve the label from the next form
          \par strLabel address of a string to put the results
          \return boolean as indication of success
        */
        bool                                  getNewHeader(QString& strLabel);
        //! Set Loading
        /*! This function sets the loading mode and indicates if the form is being loaded 
        automatically from a file, or manually by the user.
          \par bLoading constant boolean to set if is loading ot not
          \return boolean as indication of success
        */
        void                                  setLoading(const bool bLoading){m_bLoading=bLoading;}

    protected:
        //! Set UI permissions
        /*! This function hides/shows buttons/functionality of the UI, according to 
           the values of the RoleDef Structure
        */
        void                                  setUIPermissions();
        //! Abstract Preview Row
        /*! A common implementation of preview row, that can be called by all members on previewRow.
           \par index index of the clicked row
           \return bool as cuccess or failure
          \sa previewRow(QModelIndex index)
        */
        bool                                  abstractPreviewRow(QModelIndex index);
        //! Interface for really apply
        /*! Implemented from the base class. Here we decide if we want to call reallyApply() or applyChanges,
        according if we are in edit mode, or not;
          \sa reallyApply()
        */
        bool                                  IReallyApply();
        //! A pure virtual function
        /*! This is the function where we actually apply the changes; it is called by the interface IReallyApply;
          \sa onPreSubmit(const bool bSubmit), IReallyApply()
        */
        virtual bool                          reallyApply()=0;
        //! Set preview model
        /*! In this function we assign the model that allows us to preview records
        \par aModel pointer to a relational tableModel
          \sa setGroupDetails(QGroupBox* aGroupDetails),setButtonBox(QDialogButtonBox* aButtonBox)
        */
        void                                  setPreviewModel(QSqlRelationalTableModel* aModel){m_model=aModel;}
        //! Set group details
        /*! In this function we store a pointer for the QGroupBox with the details of the record.
        \par aGroupDetails pointer to a QGroupBox
          \sa setPreviewModel(QSqlRelationalTableModel* aModel),setButtonBox(QDialogButtonBox* aButtonBox)
        */
        void                                  setGroupDetails(QGroupBox* aGroupDetails){m_groupDetails=aGroupDetails;}
        //! Set button box
        /*! In this function we store a pointer for the buttonBox, with close and apply buttons;
        \par aButtonBox pointer to a QDialogButtonBox
          \sa setGroupDetails(QGroupBox* aGroupDetails),setPreviewModel(QSqlRelationalTableModel* aModel)
          */
        void                                  setButtonBox(QDialogButtonBox* aButtonBox){m_buttonBox=aButtonBox;}
        //! Set new button
        /*! In this function we store a pointer for the "new" pushbutton.
        \par aButtonBox pointer to a pushbutton
          \sa setEditButton(QPushButton* apushButton),setRemoveButton(QPushButton* apushButton)
          */
        void                                  setNewButton(QPushButton* apushButton){m_pushNew=apushButton;}
        //! Set edit button
        /*! In this function we store a pointer for the "edit" pushbutton.
        \par aButtonBox pointer to a pushbutton
          \sa setNewButton(QPushButton* apushButton),setRemoveButton(QPushButton* apushButton)
          */
        void                                  setEditButton(QPushButton* apushButton){m_pushEdit=apushButton;}
        //! Set remove button
        /*! In this function we store a pointer for the "remove" pushbutton.
        \par aButtonBox pointer to a pushbutton
          \sa setEditButton(QPushButton* apushButton),setNewButton(QPushButton* apushButton)
          */
        void                                  setRemoveButton(QPushButton* apushButton){m_pushRemove=apushButton;}
        //! Set next button
        /*! In this function we store a pointer for the "next" pushbutton.
        \par aButtonBox pointer to a pushbutton
          \sa setEditButton(QPushButton* apushButton),setNewButton(QPushButton* apushButton)
          */
        void                                  setNextButton(QPushButton* apushButton){m_pushNext=apushButton;}
        //! Set previous button
        /*! In this function we store a pointer for the "previous" pushbutton.
        \par aButtonBox pointer to a pushbutton
          \sa setEditButton(QPushButton* apushButton),setNewButton(QPushButton* apushButton)
          */
        void                                  setPreviousButton(QPushButton* apushButton){m_pushPrevious=apushButton;}
        //! Init preview table
        /*! In this function we initialize the table that displays the records, connecting it to a model
        \par aTable pointer to a table widget
        \par view pointer to a read-only model
        */
        void                                  initPreviewTable(QTableView* aTable, QSqlQueryModel* view);
        //! A pure virtual member.
        /*! In this function we set the query that filters the combobox for the selected top-level id;
         \sa setPreviewQuery(), uI4NewRecord(), genericCreateRecord()
        */
        virtual void                          filterModel4Combo()=0;
        //! Generic UI for new record
        /*! This is a generic function for the UI of a new record, called by the virtual uI4NewRecord
         \sa uI4NewRecord()
        */
        void                                  genericUI4NewRecord();
        //! A pure virtual member.
        /*! In this function we initialize the UI values for a new record;
         \sa genericUI4NewRecord()
        */
        virtual void                          uI4NewRecord()=0;
        //! A pure virtual member.
        /*! In this function we initialize some values (UI, models, etc) that need to be set before calling the onShowForm;
          \sa onShowForm()
        */
        virtual void                          beforeShow()=0;
        /*! generic create record;
          \sa setPreviewModel(QSqlRelationalTableModel* aModel), setPreviewQuery(), filterModel4Combo(), uI4NewRecord()
        */
        virtual void                          setHeader()=0;
        //! Generic Create Record
        /*! Method called, each time we create a new record; it does some "household" stuff like
        resetting the filters of the models, and then it actually inserts an empry record on the "resident" model in this class;
        */
        void                                  genericCreateRecord();
        //! Reimplementation of the virtual method on QWidget class
        /*! Here we adjust the table to the new dimensions of the form;
        \par event we don't actually use this parameter!
        */
        void                                  resizeEvent ( QResizeEvent * event );
        //! Apply Changes to Record
        /*! This a pure virtual method, that actually applies the edits on this record.
        \return boolean as success or failure
        \sa genericEditRecord(bool on, int& ret)
        */
        virtual bool                          applyChanges()=0;
        //! After apply
        /*! Slot called after a successfully submission of the record into the database;
        we just update the preview query to show the inserted record on the table, and select this record;
        */
        bool                                  afterApply();
        //! Submit Mapper and Model
        /*! This function was design to submit the mapper connected to the main model of the form (m_model),
        and the respective model; the mapper is sent as an argument, but the model no, so be sure to use
        this function with caution *being absolutely sure* that the mapper you are sending its connected
        to the main model of the form; otherwise, unexpected results will occur!
        \par aMapper a Mapper
        \return boolean as success or failure
        */
        bool                                  submitMapperAndModel(QDataWidgetMapper* aMapper);
        bool                                  submitDates(QDataWidgetMapper* startMapper, QDataWidgetMapper* endMapper);
        bool                                  amendDates(QDataWidgetMapper* startMapper, QDataWidgetMapper* endMapper,
                                                    QVariant& start, QVariant& end);

        bool                                  translateIndex(const QModelIndex inIdx, QModelIndex& outIdx);

        bool                                  discardNewRecord();
        //! Update Sample
        /*! Helper function that updates the sample structure, from a given index
          \sa updateSample()
        */
        bool                                  updateSample(const QModelIndex& idx);
        //! Update Sample
        /*! Override of updateSample(const QModelIndex& idx) that uses the current selected index, for perfoming the update.
          \sa updateSample(const QModelIndex& idx, const int id)
        */
        bool                                  updateSample();

        QList<QWidget*>                       m_lWidgets;/**< list of widgets on the preview tab, that we want to enable/disable as we create/submit a record*/
        //! Init Help Ids
        /*! Abstract function (ihnerited from base class) that initializes the m_widgetInfo container, by associating
        widgets and help references.
        */
        virtual void                          initHelpIds()=0; 

    signals:
        void                                  disableTabs(bool bDisable=true);
        void                                  recordRemoved();/**< signal to indicate that a record has been removed from the model (and table view)*/
        void                                  isLogBook(const bool bIsLogbook);/**< signal to indicate if this is a logbook or sampling form*/
        void                                  blockCatchUISignals(const bool bBlock);/**< signal to block/unblock the CatchInputCtrl signals*/
        //! Leaving Edit Mode
        /*! Signal to inform if we are *really* leaving the edit mode, or not
          \par bFinished flag that indicates if we started/finished editing
          \par bDiscarded flag that indicates, in case we finished, if we want to discard changes (default is false)
        */
        void                                  editLeave(const bool bFinished, const bool bDiscarded=false);
        //! Apply Changes to Frame Details
        /*! This signal is used when we are in editing mode and we want to cache the changes
        in form framedetails, till the user decides to comit the changes. The signal informs 
          framedetails that we want to apply the changes in the temporary sampling frame. After they
          are successfully applied, we can finish the editing process.
        */
        void                                  applyChanges2FrameDetails();

    public slots:
        /*! Reimplemented from the GenericTab class
        This is the slot that we call, when the form is displayed.
        */
        void                                  onShowForm();
        //! Edit Record
        /*! Slot called, each time we edit a record; it checks if the toggle is on/off and triggers appropriated responses like
        displaying a confirmation dialog.
        \return boolean to indicate if we want to edit or not
        */
        bool                                  editRecord(bool on);
        //! check Dependant Dates
        /*! This is a utility function that validates date changes (called through editing mode).
        It is designed to navigate through the table structure of logbook and sampling, searching for dependant date records.
        \param curTable name of the starting table
        \param curStartDt new start date
        \param curEndDt new end date
        \param strTable name of the table that is being tested right now
        \param id id of the parent (to filter the table)
        \param strError string to store the error
        \return boolean to indicate if the validation went through
        */
        bool                                  checkDependantDates(const QString curTable, const QDateTime& curStartDt,
                                                    const QDateTime& curEndDt, QString strTable, int id,QString& strError);

    private slots:
        //! A pure virtual member.
        /*! In this function we set the query that displays the records on the preview container;
         \sa filterModel4Combo(), uI4NewRecord(), genericCreateRecord()
        */
        virtual void                          setPreviewQuery()=0;
        //! Enable/Disable edit/remove buttons
        /*! This is an utility function, that enables the edit/remove buttons in according to the existence of
        records on tableView. It is fired by tableView signals of add/remove records.
        */
        void                                  adjustEnables();
        //! Pure virtual function
        /*! This the function that is called after the editRecord(bool on) is over (using the signal editLeave(const bool bFinished, const bool bDiscarded=false). After this, we call
        editFinished() for the "final touches" on the UI!
         \par bFinished flag that indicates if we started/finished editing
         \par bDiscarded flag that indicates, in case we finished, if we want to discard changes (default is false)
        \sa editRecord(bool on), editFinished(), editLeave(const bool bFinished, const bool bDiscarded=false)
        */
        virtual void                          onEditLeave(const bool bFinished, const bool bDiscarded)=0;
        //! Pure virtual function
        /*! Final touches on the UI, after the editing process is (successfully) complete!
        \sa editRecord(bool on), onEditLeave(const bool bFinished, const bool bDiscarded), editLeave(const bool bFinished, const bool bDiscarded=false)
        */
        virtual void                          editFinished()=0;
        //! Set Header Label Tips
        /*! In this function we set the tooltip, status tip and WhatsThis text,
        regarding the fact that it is a logbook or sampling form;
        \par bLogBook boolean to indicate whether it is a logbook or sampling form
        */
        void                                  setTips(const bool bLogbook);
        //! A pure virtual member.
        /*! Slot that inititializes a new record
          \sa previewRow(QModelIndex index), onButtonClick(QAbstractButton * button), onItemSelection(), removeRecord()
        */
        virtual void                          createRecord()=0;
        //! Remove record
        /*! Slot that removes a record
          \sa createRecord()
        */
        void                                  removeRecord();
        //! A pure virtual member.
        /*! Slot that previews a selected row
          \sa createRecord(), onButtonClick(QAbstractButton * button), onItemSelection()
        */
        virtual void                          previewRow(QModelIndex index)=0;
        //! A pure virtual member.
        /*! Slot that implements the two buttons on the preview/edit dialog: close and apply
          \sa createRecord(), previewRow(QModelIndex index), onItemSelection()
        */
        virtual bool                          onButtonClick(QAbstractButton * button);
        //! A pure virtual member.
        /*! Slot that implements the behaviour corresponding to select an item on the table
        (most of the times, it enables the pushNext/pusprevious buttons);
          \sa createRecord(), previewRow(QModelIndex index), onButtonClick(QAbstractButton * button)
          */
        virtual void                          onItemSelection()=0;

    private:
        //! A pure virtual member.
        /*! Helper function for the next slot, that gets the title label of the next form
          \sa updateSample()
        */
        virtual bool                          getNextLabel(QString& strLabel)=0;

        QSqlRelationalTableModel*             m_model;/**< pointer for the main model in this form */
        QTableView*                           m_table;/**< pointer for the table in this form */
        QDialogButtonBox*                     m_buttonBox;/**< pointer for the buttonBox in this form */
        QGroupBox*                            m_groupDetails;/**< pointer for the detail groupbox in this form */
        QPushButton*                          m_pushNew;/**< pointer for the pushNew button in this form */
        QPushButton*                          m_pushRemove;/**< pointer for the pushRemove button in this form */
        QMap<QString,sTable>                  mapTablesL;/**< map with table sequence for logbook (for checking dependant dates!)*/
        QMap<QString,sTable>                  mapTablesS;/**< map with table sequence for sampling (for checking dependant dates!)*/
        bool                                  m_bLoading;/**< boolean flag to indicate if we are in loading mode*/
        QPushButton*                          m_pushEdit;/**< pointer for the pushEdit button in this form */
        QPushButton*                          m_pushNext;/**< pointer for the pushPrevius button in this form */
        QPushButton*                          m_pushPrevious;/**< pointer for the pushNext button in this form */
};
#endif //PREVIEWTAB_H