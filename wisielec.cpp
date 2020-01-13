#include "ui_wisielec.h"
#include "wisielec.h"
#include "qbitmap.h"
#include "client.h"

Wisielec::Wisielec(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Wisielec)
{

    ui->setupUi(this);
    sock.connect();
    ui->label_2->setText(sock.send("#"));

//    ui->label_2->setText(QString::fromStdString(manager.flor_table));


    player_status();
//    QPixmap pixmap("C:/Users/Tina/Desktop/wisielec/obraz/0.png");
//    ui->label_pic->setPixmap(pixmap);
//    ui->label_pic->setMask(pixmap.mask());
}

Wisielec::~Wisielec()
{

    sock.send("#");
    sock.discon();
    delete ui;
}


void Wisielec::on_A_clicked()
{
    ui->label->setText("A");
//    sock.send("A");  //=manager.chek('A');

    ui->label_2->setText(sock.send("A"));
//    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    player_status();
//    QPixmap pixmap(manager.pic());
//    ui->label_pic->setPixmap(pixmap);
//    ui->label_pic->setMask(pixmap.mask());

}

void Wisielec::on_B_clicked()
{
    ui->label->setText("B");
    ui->label_2->setText(sock.send("B"));
    player_status();
}

void Wisielec::on_C_clicked()
{
    ui->label->setText("C");
    ui->label_2->setText(sock.send("C"));
    player_status();
}

void Wisielec::on_D_clicked()
{
    ui->label->setText("D");
    ui->label_2->setText(sock.send("D"));
    player_status();
}

void Wisielec::on_E_clicked()
{
    ui->label->setText("E");
    ui->label_2->setText(sock.send("E"));
    player_status();

}

void Wisielec::on_F_clicked()
{
    ui->label->setText("F");
    ui->label_2->setText(sock.send("F"));
    player_status();

}

void Wisielec::on_G_clicked()
{
    ui->label->setText("G");
    ui->label_2->setText(sock.send("G"));
    player_status();
}

void Wisielec::on_H_clicked()
{
    ui->label->setText("H");
    ui->label_2->setText(sock.send("H"));
    player_status();

}

void Wisielec::on_I_clicked()
{
    ui->label->setText("I");
    ui->label_2->setText(sock.send("I"));
    player_status();

}

void Wisielec::on_J_clicked()
{
    ui->label->setText("J");
    ui->label_2->setText(sock.send("J"));
    player_status();

}

void Wisielec::on_K_clicked()
{
    ui->label->setText("K");
    ui->label_2->setText(sock.send("K"));
    player_status();

}

void Wisielec::on_L_clicked()
{
    ui->label->setText("L");
    ui->label_2->setText(sock.send("L"));
    player_status();

}

void Wisielec::on_M_clicked()
{
    ui->label->setText("M");
    ui->label_2->setText(sock.send("M"));
    player_status();

}

void Wisielec::on_N_clicked()
{
    ui->label->setText("N");
    ui->label_2->setText(sock.send("N"));
    player_status();

}

void Wisielec::on_O_clicked()
{
    ui->label->setText("O");
    ui->label_2->setText(sock.send("O"));
    player_status();

}

void Wisielec::on_P_clicked()
{
    ui->label->setText("P");
    ui->label_2->setText(sock.send("P"));
    player_status();

}

void Wisielec::on_R_clicked()
{
    ui->label->setText("R");
    ui->label_2->setText(sock.send("R"));
    player_status();

}

void Wisielec::on_S_clicked()
{
    ui->label->setText("S");
    ui->label_2->setText(sock.send("S"));
    player_status();

}

void Wisielec::on_T_clicked()
{
    ui->label->setText("T");
    ui->label_2->setText(sock.send("T"));
    player_status();
}

void Wisielec::on_U_clicked()
{
    ui->label->setText("U");
    ui->label_2->setText(sock.send("U"));
    player_status();

}

void Wisielec::on_W_clicked()
{
    ui->label->setText("W");
    ui->label_2->setText(sock.send("W"));
    player_status();

}

void Wisielec::on_X_clicked()
{
    ui->label->setText("X");
    ui->label_2->setText(sock.send("X"));
    player_status();

}

void Wisielec::on_Y_clicked()
{
    ui->label->setText("Y");
    ui->label_2->setText(sock.send("Y"));
    player_status();

}

void Wisielec::on_Z_clicked()
{
    ui->label->setText("Z");
    ui->label_2->setText(sock.send("Z"));
    player_status();

}


void Wisielec::on_RESET_clicked()
{
//    manager.new_password();
    ui->label_2->setText(sock.send("#"));
    player_status();
//    ui->label_2->setText(QString::fromStdString(manager.flor_table));

//    QPixmap pixmap("C:/Users/Tina/Desktop/wisielec/obraz/0.png");
//    ui->label_pic->setPixmap(pixmap);
    //    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::player_status()
{
    QString picture = "C:/Users/Tina/Desktop/wisielec/obraz/";
            picture += sock.send("=");
            picture += ".png";

    QPixmap pixmap(picture);
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());

    ui->label_3->setText("Pkt Gracza: "+sock.send("*"));
    ui->label_4->setText("Przeciwnik: "+sock.send("1"));
}



