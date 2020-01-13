#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class client : public QObject //dziedziczenie po Qobject
{

    Q_OBJECT //co tu se wisi tto tak
public:

    explicit client(QObject *parent = 0);

    void connect();

    void discon();

    QString send(QString clik);

signals:    //co to za sekcja, private domyslnie tak?

public slots: //co to za sekcja, public bo tam private

private:
    QTcpSocket *socket;  //wskaznik na socket~?

};

#endif // CLIENT_H
