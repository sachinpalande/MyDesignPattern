#include "mainwindow.h"
#include "ui_mainwindow.h"

//Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//Destructor
MainWindow::~MainWindow()
{
    delete ui;
}

//Setting MainWinUi new reference - we have not used this function.
// We dont want to change Ui reference
void MainWindow:: setMainWinUi(Ui::MainWindow* MainWinUi)
{
    ui = MainWinUi;
}

//Getting private variable ui from MainWindow class
Ui::MainWindow* MainWindow:: getMainWinUi()
{
    return ui;
}
