#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
using namespace std;

class Etudiant {
public:
    // Constructeur
    Etudiant(const string& nom, const string& dateNaissance);

    // Obtient le nom de l'étudiant
    string obtenirNom() const;

    // Obtient la date de naissance
    string obtenirDateNaissance() const;

private:
    string nom;
    string dateNaissance; 
};

#endif