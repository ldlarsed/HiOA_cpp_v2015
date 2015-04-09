#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mydialog.h"
#include "about.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_Window_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    MyDialog *mDialog;
    About *aBout;
};

#endif // MAINWINDOW_H
