#include "PanelMail.h"
#include "ui_PanelMail.h"

#include "globals.h"

PanelMail::PanelMail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelMail)
{
    ui->setupUi(this);

    ui->cB_currentEMail->addItem(MAIN_MAIL_ADDRESS);
}

PanelMail::~PanelMail()
{
    delete ui;
}

void PanelMail::renew()
{
    QString address = ui->cB_currentEMail->currentText();

    //for removing
}

void PanelMail::writeMail()
{

}
