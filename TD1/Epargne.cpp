#pragma once
#include <iostream>
#include <Epargne.h>
#include <list>
using namespace std;

Epargne::Epargne(Client proprietaire, int ID_compte, double solde, string mdp, int RIB, string IBAN, double taux_interet, double somme_limite) : 
    Compte(proprietaire, ID_compte, solde, mdp, RIB, IBAN), 
    taux_interet(taux_interet), 
    somme_limite(somme_limite)
{}

double Epargne::getTaux_Interet() const {
    return taux_interet;
}

double Epargne::getSomme_Limite() const {
    return somme_limite;
}