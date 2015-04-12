#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    StatLabel = new QLabel(this);
    StatProgress = new QProgressBar(this);
    ui->statusBar->addPermanentWidget(StatLabel);
    ui->statusBar->addPermanentWidget(StatProgress, 1);

    StatProgress->setTextVisible(false);
    StatLabel->setText("Hello from statlabel");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_something_triggered()
{
    ui->statusBar->showMessage("Hello", 2000);
    StatProgress->setValue(45);
}
