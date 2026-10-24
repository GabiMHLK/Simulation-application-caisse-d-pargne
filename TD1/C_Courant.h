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
    int RIB;
    string IBAN;


    public:
        Courant(Client proprietaire,int ID_compte, double solde, string mdp, string carte_bancaire, int plafond_pay, int plafond_retrait, int nb_plafond, int RIB, string IBAN);
        int getRIB() const;
        int getPlafond_Pay() const;
        int getPlafond_Retrait() const;
        string getIBAN() const;
        void setPlafond();
        
};