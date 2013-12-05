#ifndef BUTTONGROUP_H
#define BUTTONGROUP_H

#include <QtGui>
#include <QtSql>

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//! ButtonGroup Class
/*!
This class implements a custom control, with an array of exclusive radio buttons, tha
provides a unique user property, to be used with QDataWidgetMapper.
this was created to enable us to use radio buttons in conjunction with DataWidgetMapper.
Since we want to map this control to a boolean field in the database, the ids are casted into booleans;
- id=0 false
- id=1 true
 Obviously we *only* support two ids (0,1);
*/

class ButtonGroup: public QWidget
{
    Q_OBJECT

    public:
        ButtonGroup(QWidget *parent = 0);
        virtual ~ButtonGroup();

        Q_PROPERTY(bool checkedId READ getCheckedId WRITE checkId USER true)

        bool getCheckedId();//!< Gets property
        void checkId(bool id);//!< Writes property

        void addButton(QAbstractButton *button, int id);

    signals:
        void buttonClicked(int id);
        void buttonReleased(int id);
        void buttonPressed(int id);

    private:
        void commitMyData();
        QButtonGroup *m_buttonGroup;
};

/////////////////////////////////////

class RadioDelegate: public QSqlRelationalDelegate
{
    Q_OBJECT

    public:
        RadioDelegate(QWidget *parent = 0);
        ~RadioDelegate(){;}
                                            
    public slots:
        void commitMyData();

    };

#endif // BUTTONGROUP_H

