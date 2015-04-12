#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->label->setText("<h2>Hei!</h2>");

    ui->checkBox->setChecked(true);

    /*
     * Skal populere comboboksen her
     */

    ui->comboBox->addItem("Hello");
    ui->comboBox->addItem("World");
    ui->comboBox->addItem("Cat!");

    for(int i = 0; i<9; i++){
        ui->comboBox->addItem(QString::number(i)+" item");
    }


    /*
     * Populerer ListView som er en windget
     */

    for(int i = 0; i<9; i++){
        ui->listWidget->addItem(QString::number(i)+" item");
    }


    /*
     * QTreeWidget
     * Parent items
     * Setter opp startparametre til startRoot
     */

    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabels(QStringList() << "one" << "two");

    AddRoot("Hello", "World");
    AddRoot("Hello2", "World2");
    AddRoot("Hello3", "World3");


    /*
     * Setting some properties for the horizontal slider
     */
    //Connecting the slider and progress bar
    ui->progressBar->setValue(ui->horizontalSlider->value());
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    QMessageBox::information(this, "Title", "Message");


}

void Dialog::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("Dette var kult!");
    QMessageBox::information(this, "Melding", ui->lineEdit->text());
}

void Dialog::on_pushButton_4_clicked()
{
    this->close();
}

void Dialog::on_checkBox_clicked()
{

}

void Dialog::on_pushButton_3_clicked()
{
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this, "Inoformation for you", "<b>Schrödinger!</b><br>Wasn't a cat.");
    }else{
        QMessageBox::information(this, "Inoformation for you", "<i>Decay is initiated</i>");
    }
}

void Dialog::on_pushButton_5_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this, "Title", ui->radioButton->text());
    }
    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "Title", ui->radioButton_2->text());
    }
    if(ui->radioButton_3->isChecked()){
        QMessageBox::information(this, "Title", ui->radioButton_3->text());
    }
}

void Dialog::on_pushButton_6_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}

void Dialog::on_pushButton_7_clicked()
{
    //ui->listWidget->currentItem()->setText("Tekten er endret");
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setText("Text changed");
    itm->setTextColor(Qt::red);
    itm->setBackgroundColor(Qt::green);
}

/*
 * Setter opp QTreeWidget
 */

void Dialog::AddRoot(QString name, QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, Description);
    ui->treeWidget->addTopLevelItem(itm);

    /*
     * Child items blir lagt til her men selve hovedkategorien
     * (parent) blir lagt til i konstruktørn.
     */
    AddChild(itm, "one", "Hello again");
    AddChild(itm, "two", "Second hello");
}

void Dialog::AddChild(QTreeWidgetItem *parent, QString name, QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);
}

void Dialog::on_pushButton_8_clicked()
{
    ui->treeWidget->currentItem()->setBackground(0, Qt::red);
    ui->treeWidget->currentItem()->setBackground(1, Qt::blue);
}
