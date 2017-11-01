#ifndef PANELMAIL_H
#define PANELMAIL_H

#include <QWidget>
#include <QtNetwork>

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
    Ui::PanelMail *ui;
};

#endif // PANELMAIL_H
