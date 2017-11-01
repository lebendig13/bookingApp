#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDockWidget>

#include "globals.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    panelMail(NULL),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createDockWidgets();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createDockWidgets()
{
    createPanelMail();
}


void MainWindow::createPanelMail()
{
    QDockWidget* dw = new QDockWidget(QS("Почта"), this);

    dw->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);

    panelMail = new PanelMail(dw);
    dw->setWidget(panelMail);

    addDockWidget(Qt::LeftDockWidgetArea, dw);

//    QObject::connect(ui->actionMail)
}
