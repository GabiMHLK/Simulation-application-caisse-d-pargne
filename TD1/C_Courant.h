#pragma once
#include <iostream>
#include <Compte.h>
#include <list>
using namespace std;

class Courant : public Compte {
    private:
        string carte_bancaire;
        int plafond_pay;
        int plafond_retrait;
        int extension_plafond;
        int extension_retrait;
        int nb_plafond = 3;
    


    public:
        Courant(Client proprietaire, int ID_compte, double solde, string mdp, int RIB, string IBAN, string carte_bancaire, int plafond_pay, int plafond_retrait, int nb_plafond);
        int getPlafond_Pay() const;
        int getPlafond_Retrait() const;
        void setPlafond();
        
};

//1h06 6h36
//14h36 17h06