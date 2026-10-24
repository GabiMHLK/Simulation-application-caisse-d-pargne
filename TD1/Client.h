#pragma once
#include <iostream>
using namespace std;

class Client {
    private :
        int ID_client;
        string nom;
        string prenom;
        string adresse;
        string email;
        string numero_telephone;

    public :
        Client(int id, string nom, string prenom, string adresse, string email, string numero_telephone);
        string getNom() const;
        string getPrenom() const;
        string getAdresse() const;
        string getEmail() const;
        string getNumeroTelephone() const;
};