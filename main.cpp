/*********************************************************************************
 * Author           : Sachin Palande
 * Date Started     : 18 Sept, 2019
 * Date Modified    : 18 Sept, 2019 (sachin palande)
 *
 * This is the main function, we are initialising mainWinInstance as Null
 * Because this is not allowed in Class definition, this is static and private.
 *
 * mainWinObj, we want this to be global as this is the purpose of singleton
 *
 * We accessed Ui which is private in MainWindow class from main() function using encapsulation
 *
 * ************************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

MainWindow* MainWindow::_mainWinInstance = NULL;
static MainWindow* mainWinObj;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *mainWinObj = MainWindow::_getMainWinInstance(); // Obejct instantiation
    mainWinObj->getMainWinUi()->lb_sachin->setText("sachin");   // setting text of label on UI

    mainWinObj->show(); //show UI

    return a.exec();
}
