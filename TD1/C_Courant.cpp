#include "C_Courant.h"
#include <iostream>
using namespace std;

Courant::Courant(Client proprietaire,int ID_compte, double solde, string mdp, string carte_bancaire, int plafond_pay, int plafond_retrait, int nb_plafond, int RIB, string IBAN) : 
    Compte(proprietaire, ID_compte, solde, mdp), 
    carte_bancaire(carte_bancaire), 
    plafond_pay(plafond_pay), 
    plafond_retrait(plafond_retrait), 
    nb_plafond(nb_plafond), 
    RIB(RIB), 
    IBAN(IBAN) 
{}

int Courant::getRIB() const {
    return RIB;
}

int Courant::getPlafond_Pay() const {
    return plafond_pay;
}

int Courant::getPlafond_Retrait() const {
    return plafond_retrait;
}

string Courant::getIBAN() const {
    return IBAN;
}

void Courant::setPlafond() {
    string rep;
    cout << "Voulez vous augmenter votre plafond ? [O] : oui / [N] : non" << endl << "Il vous reste " << nb_plafond << " augmentations." << endl;
    cout << "Il passera de " << plafond_pay << "$ à " << extension_plafond << "$ pour les payements et de " << plafond_retrait << "$ à " << extension_retrait << "$ pour les retraits." << endl;
    cin >> rep;
    if (rep == "O" || rep == "o"){
        if (nb_plafond > 0) {
            plafond_pay = extension_plafond;
            plafond_retrait = extension_retrait;
            nb_plafond--;
            cout << "Votre plafond a été augmenté. Il vous reste " << nb_plafond << " augmentations." << endl;
        }
        else {
            cout << "Vous n'avez plus d'augmentation de plafond disponible." << endl << "Veuillez contacter votre agence pour en obtenir de nouveaux." << endl;
        }
    }
    else if (rep == "N" || rep == "n"){
        cout << "Vous avez choisi de ne pas augmenter votre plafond." << endl;
    }
    else {
        cout << "Réponse invalide. Veuillez entrer [O] pour oui ou [N] pour non." << endl;
    }
}

