#pragma once
#include <iostream>
#include <Client.h>
using namespace std;

class Compte {
    private:
        Client propretaire;
        int ID_compte;
        double solde;
        string mdp;

    public :
        Compte(Client proprietaire,int ID_compte, double solde, string mdp);

        void changement_mdp();

        int getID_compte() const;
        double getSolde() const;
};