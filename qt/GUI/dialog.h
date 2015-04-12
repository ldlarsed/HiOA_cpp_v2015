#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    void AddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString Description);


public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_checkBox_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
