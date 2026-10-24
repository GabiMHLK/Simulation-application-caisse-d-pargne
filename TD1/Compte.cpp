#include "Compte.h"
#include <iostream>
using namespace std;

Compte::Compte(Client proprietaire,int ID_compte, double solde, string mdp) : 
    propretaire(proprietaire), 
    ID_compte(ID_compte), 
    solde(solde), 
    mdp(mdp) 
{}

void Compte::changement_mdp() {
    string test;
    int essai = 3;
    cout << "Veuillez entrer votre mot de passe actuel : " << endl;
    cin >> test;
    if (test == mdp) {
        cout << "Veuillez entrer le nouveau mot de passe : " << endl;
        cin >> mdp;
        cout << "Votre mot de passe a été changé pour : " << endl << mdp << endl;
    }
    else {
        while (test != mdp && essai > 0) {
            essai--;
            cout << "Mot de passe incorrect. Il vous reste " << endl << essai << endl << " essais " << endl;
            cout << "Veuillez entrer votre mot de passe actuel : " << endl;
            cin >> test;
        }
    }
}
int Compte::getID_compte() const {
    return ID_compte;
}

double Compte::getSolde() const {
    return solde;
}