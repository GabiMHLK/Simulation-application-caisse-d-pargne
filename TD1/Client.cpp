#include "Client.h"

#include <iostream>
#include <string>

using namespace std;

Client::Client(int id, string nom, string prenom, string adresse, string email, string numero_telephone) : 
    ID_client(id), 
    nom(nom), 
    prenom(prenom), 
    adresse(adresse), 
    email(email), 
    numero_telephone(numero_telephone) 
{}

string Client::getNom() const {
    return nom;
}

string Client::getPrenom() const {
    return prenom;
}

string Client::getAdresse() const {
    return adresse;
}

string Client::getEmail() const {
    return email;
}

string Client::getNumeroTelephone() const {
    return numero_telephone;
}