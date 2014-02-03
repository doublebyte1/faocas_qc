#include <QNetworkReply>
#include <QtDebug>
#include <QSslError>
#include "frmprjpage.h"

FrmPrjPage::FrmPrjPage(QWidget *parent, Qt::WFlags flags):
QWidget(parent, flags){

    setupUi(this);

    this->webView->load(QUrl("https://ladybug.no-ip.org/faocas/app/"));

       connect(webView->page()->networkAccessManager(),
               SIGNAL(sslErrors(QNetworkReply*, const QList<QSslError> & )),
               this,
               SLOT(handleSslErrors(QNetworkReply*, const QList<QSslError> & )));
}

void FrmPrjPage::handleSslErrors(QNetworkReply* reply, const QList<QSslError> &errors)
{
    qDebug() << "handleSslErrors: ";
    foreach (QSslError e, errors)
    {
        qDebug() << "ssl error: " << e;
    }

    reply->ignoreSslErrors();
}

FrmPrjPage::~FrmPrjPage()
{
}
