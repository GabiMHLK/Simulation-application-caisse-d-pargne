#pragma once
#include <iostream>
#include <C_Courant.h>
#include <list>
using namespace std;

class Visa_Classic : public Courant {
    private:
        bool débit_immediat;
        bool débit_différé;
        bool contrôle_solde;
        bool assistance_médicale;
        double montant_AM;




    public:
        Visa_Classic(Client proprietaire,int ID_compte, double solde, string mdp, string carte_bancaire, int plafond_pay, int plafond_retrait, int nb_plafond, int RIB, string IBAN);
        
};