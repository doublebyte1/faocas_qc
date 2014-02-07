#include <QNetworkReply>
#include <QtDebug>
#ifndef WIN32
	#include <QSslError>
#endif
#include "frmprjpage.h"

FrmPrjPage::FrmPrjPage(QWidget *parent, Qt::WFlags flags):
QWidget(parent, flags){

    setupUi(this);

#ifndef WIN32	
    this->webView->load(QUrl("https://ladybug.no-ip.org/faocas/app/"));

       connect(webView->page()->networkAccessManager(),
               SIGNAL(sslErrors(QNetworkReply*, const QList<QSslError> & )),
               this,
               SLOT(handleSslErrors(QNetworkReply*, const QList<QSslError> & )));
#else
    this->webView->load(QUrl("http://bertserv.ath.cx/nica/cas/app_new/html/"));		   
#endif		   
}

FrmPrjPage::~FrmPrjPage()
{
}


#ifndef WIN32
void FrmPrjPage::handleSslErrors(QNetworkReply* reply, const QList<QSslError> &errors)
{
    qDebug() << "handleSslErrors: ";
    foreach (QSslError e, errors)
    {
        qDebug() << "ssl error: " << e;
    }

    reply->ignoreSslErrors();
}
#endif
