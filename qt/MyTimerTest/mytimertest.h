#ifndef MYTIMERTEST_H
#define MYTIMERTEST_H

#include <QtCore>
#include <QDebug>


class MyTimerTest : public QObject
{
    /*
     * Meget vikgtig!
     * Det er absolut nødvendig å legge til en Q_OBJECT makro.
     * Dette definierer klassen til en fullverdig Qt klasse.
     */
    Q_OBJECT;

public:
    MyTimerTest();
    ~MyTimerTest();

    QTimer *timer;

    //Legger til public slots, det er vanlig funksjon men annerledes definisjon i h filen.
public slots:
    void MySlot();


};

#endif // MYTIMERTEST_H
