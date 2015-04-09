//#include <QtGui/QApplication>
//#include <QtGui/QLabel>

//Huso å legge til windgets call i pro filen ettersom vi bruker qt5
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>


int main(int argc, char *argv[])
{


    QApplication app(argc, argv);
    QLabel *label = new QLabel("<b>Hello <br> World!...............................</b><br><br><br>");
    label->show();


    QWidget *window = new QWidget;
    window->setWindowTitle("My App");
    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
//    QHBoxLayout *hlayout = new QHBoxLayout; //Bruk denne dersom det ønskes en horisontell layout
    QVBoxLayout *vlayout = new QVBoxLayout;

    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);
    window->setLayout(vlayout);


    window->show();


    return app.exec(); //loop for å vise alle vinduer
}
