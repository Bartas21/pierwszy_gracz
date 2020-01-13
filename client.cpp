#include "client.h"
#include <iostream>
#include <string>

client::client(QObject *parent) : //konstruktor, pusty
        QObject(parent)
{                          // to jest coś z dziedziczeniem

}

void client::connect()
{
    socket = new QTcpSocket(this); //tworzymy nowy socket
    socket->connectToHost("127.0.0.1",1000);
//    socket->connectToHost("bogotobogo.com",80);
//    -> bo to jest objekt qt i sie ma odrózniać od zwykłego
//    z kropką jak przy np label w okienku
//    connectToHost(adres hosta, numer portu, OpenMode = ReadWrite);

    if(socket->waitForConnected(3000)) //czekamy 3000ms na połączenie
      {
          qDebug() << "Connected!";

          // send
//          socket->write("hello server"); //zapis do socket?
//          socket->waitForBytesWritten(1000);                //czekaj na zapis, z timed outem, dfault= 30 000
//          socket->waitForReadyRead(3000);                  //czeka na sygnał o nowych danych do przeczytania
//          qDebug() << "Reading: " << socket->bytesAvailable(); //Returns the number of incoming bytes that are waiting to be read.

//          qDebug() << socket->readAll();//odczyt wszystko?
//          return socket->readAll();
//          std::string a = socket->readAll();
//          std::cout << a;//odczyt wszystko?
//nie baw sie tym gównem, QByteArray to string :v
//burgundowy Q-touch
//          socket->close(); // zamkniece socket
      }
      else
      {
//        return "Not connected!";
          qDebug() << "Not connected!";
      }

}

void client::discon()
{
    socket->waitForReadyRead();
    socket->readAll();
    socket->flush();
    socket->close(); // zamkniece socket
}

QString client::send(QString clik)
{

    socket->write(clik.toLocal8Bit()); //zapis do socket?
    socket->waitForBytesWritten();
    socket->waitForReadyRead();
    return socket->readAll();
}




