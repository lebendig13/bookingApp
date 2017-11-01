#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "PanelMail.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void createDockWidgets();

    void createPanelMail();

private:
    PanelMail* panelMail;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
