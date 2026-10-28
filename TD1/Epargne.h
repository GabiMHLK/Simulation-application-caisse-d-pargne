#pragma once
#include <iostream>
#include <Compte.h>
using namespace std;

class Epargne : public Compte {
    private:
        double taux_interet;
        double somme_limite;

    public:
        Epargne(Client proprietaire, int ID_compte, double solde, string mdp, int RIB, string IBAN, double taux_interet, double somme_limite);
        double getTaux_Interet() const;
        double getSomme_Limite() const;
};