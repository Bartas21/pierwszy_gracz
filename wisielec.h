#ifndef WISIELEC_H
#define WISIELEC_H

#include <QMainWindow>
#include "client.h"

//#include"password_maker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Wisielec; }
QT_END_NAMESPACE

class Wisielec : public QMainWindow
{
    Q_OBJECT

public:

    Wisielec(QWidget *parent = nullptr);
    ~Wisielec();

//    password_maker manager;


private slots:


    void on_A_clicked();

    void on_B_clicked();

    void on_C_clicked();

    void on_D_clicked();

    void on_E_clicked();

    void on_F_clicked();

    void on_G_clicked();

    void on_H_clicked();

    void on_I_clicked();

    void on_J_clicked();

    void on_K_clicked();

    void on_L_clicked();

    void on_M_clicked();

    void on_N_clicked();

    void on_O_clicked();

    void on_P_clicked();

    void on_R_clicked();

    void on_S_clicked();

    void on_T_clicked();

    void on_U_clicked();

    void on_W_clicked();

    void on_X_clicked();

    void on_Y_clicked();

    void on_Z_clicked();

    void on_RESET_clicked();

    void player_status();


private:
    Ui::Wisielec *ui;

    client sock;

};
#endif // WISIELEC_H

