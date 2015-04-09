#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);

    const QString testS = "Hei";
    this->setWindowTitle(testS);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    mDialog = new MyDialog(this);
    mDialog->show();

    //    mDialog.setModal(true); //Modal medfører at dialogen tar over fokus fra bakliggende applikasjon
    //    mDialog.exec();
}

void MainWindow::on_actionAbout_triggered()
{
    aBout = new About(this);
    aBout->show();
}
