#ifndef PANELMAIL_H
#define PANELMAIL_H

#include <QWidget>
#include <QTextBrowser>

#include "MailPage.h"

namespace Ui {
class PanelMail;
}

class PanelMail : public QWidget
{
    Q_OBJECT

public:
    explicit PanelMail(QWidget *parent = 0);
    ~PanelMail();

public slots:
    void renew();
    void writeMail();

private:
    QString mailAddress();

private:
    MailPage* mailPage;

private:
    Ui::PanelMail *ui;
};

#endif // PANELMAIL_H
