#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    static MainWindow* _mainWinInstance;

public:
    static MainWindow* _getMainWinInstance()
    {
        if(_mainWinInstance == NULL)
            _mainWinInstance = new MainWindow();
        return _mainWinInstance;
    }
    Ui::MainWindow* getMainWinUi();
    void setMainWinUi(Ui::MainWindow* MainWinUi);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
