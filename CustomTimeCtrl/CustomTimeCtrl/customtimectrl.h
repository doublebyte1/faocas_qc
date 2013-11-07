#ifndef CUSTOMTIMECTRL_H
#define CUSTOMTIMECTRL_H

#include <QtDesigner/QDesignerExportWidget>
#include <QtGui>
#include "ui_datetime.h"

//!  Custom Time Control class. 
/*!
  This class decouples the DateTime Data Type in two separate widgets, for date and time;
  It also has some description properties to tells us if it is an automatic DateTime widget
  and if the time is UTC;
*/

class QDESIGNER_WIDGET_EXPORT CustomTimeCtrl : public QWidget, public Ui::DateTime
{
    Q_OBJECT

public:
    CustomTimeCtrl(QWidget *parent = 0);
    ~CustomTimeCtrl();

    Q_PROPERTY(QDateTime dateTime READ dateTime WRITE setDateTime NOTIFY dateTimeChanged USER true)
    //!< User Property exposed by this control (to be used by the QDataWidgetMapper and the Delegate) 

    //! Set DateTime
    /*! Convenience function translate a datetime value in two different parts/widgets: date and time.
    \par datetime a datetime value.
    */
    void setDateTime(const QDateTime &datetime);
    QDateTime dateTime();

    //! Set Model Row
    /*! Function to set the model row that corresponds to the record currently displayed on this widget.
    \par row model row, as integer.
    */
    void                setModelRow(const int row){m_row=row;}

    //! Set Is Date Time
    /*! Function to set if this widget implements a date and/or a time;
    \par bDate boolean to flag if this widget implements a date.
    \par bTime boolean to flag if this widget implements a time.
    \par bCheck boolean to flag if this widget has an optional time part.
    */
    void                setIsDateTime(const bool bDate, const bool bTime, const bool bCheck);

    //! Set Is UTC
    /*! Function to set if the time represented in this widget is of type UTC;
    \par bUTC boolean to flag if this time is UTC.
    */
    void                setIsUTC(const bool bUTC)
                            {m_bUTC=bUTC;}

    //! Set Is Automatic
    /*! Function to set if this is an automatic filled datetime (only current datetime is supported!)
    \par bAuto boolean to flag if this time is an automatic datetime.
    */
    void                setIsAuto(const bool bAuto)
                            {m_bAuto=bAuto; emit isAuto(m_bAuto);}

    //! Get Is Automatic
    /*! Function to get if this is an automatic filled datetime (only current datetime is supported!)
    */
    bool                getIsAuto()const {return m_bAuto;}

    //! Get Is UTC
    /*! Function to get if the time represented in this widget is of type UTC;
    */
    bool                getIsUTC()const {return m_bUTC;}

    //! Get Is DateTime
    /*! Function to get if this widget implements a date and/or a time; the result is stored in two boolean flags (for date and time);
    \par bdate Address of a boolean flag, where to store if this widget contains a date;
    \par bTime Address of a boolean flag, where to store if this widget contains a time;
    */
    void                getIsDateTime (bool &bDate, bool &bTime) const
                            {bDate=m_bDate; bTime=m_bTime;}

    //! Check Box
    /*! Convenience function that returns a pointer to the checkbox, that sets optional time.
    */
    QCheckBox*          checkBox(){return checkTime;}
    //! Model Row
    /*! Convenience function to return the model row;
    */
    int                 modelRow() const {return m_row;}

    void                selectAll();

public slots:
    void                adjustDateTime(QModelIndex index, QVariant var);
    void                blockSignals(const bool bBlock);

signals:
    //! Is auto field
    /*! Signal to indicate if this is an automatic field, that displays the current datetime.
      \par Auto boolean indicating if this is an auto field
    */
    void                isAuto(bool bAuto);
    //! Is auto field
    /*! Signal to indicate if this is a datetime field. To ensure the synchronization with the model,
    we must also send the model row of the record associated with this widget, that has to be set beforehand.
      \par bDateTime boolean indicating if this is a datetime field
      \par row integer with the model row for the (current) record;
      \sa modelRow()
    */
    void                isDateTime(bool bDateTime, int row);
    void                dateTimeChanged (const QDateTime& datetime );

protected:
    //! Reimplementation from the method on the base class.
    /*! Method call on the show event;
      \par event an event
    */
    void                showEvent ( QShowEvent * event );

private slots:
    void                setHasTime(bool bTime);
    void                onDateChanged(const QDate& newDate);
    void                onTimeChanged(const QTime& newTime);

private:
    //! Set Format Info
    /*! Sets the labels with information about the current date/time format
    */
    void                setFormatInfo();
    //! Show HasDateTime
    /*! This method displays the widget with all the available options (checkbox that allows switching on/off the time).
    */
    void                showHasDateTime();

    bool                m_bCheck;//!< Boolean flag to define if we wish to show the checkbox, allowing the optional datetime control 
    bool                m_bDate;//!< Boolean flag to define if the control exposes a date 
    bool                m_bTime;//!< Boolean flag to define if the control exposes a time 
    bool                m_bUTC;//!< Boolean flag to define if the time object is in UTC 
    bool                m_bAuto;//!< Boolean flag to define if this is an automatic datetime.
    int                 m_row;//!< Integer to indicate the model row associated to this record.
};

#endif // CUSTOMTIMECTRL_H
