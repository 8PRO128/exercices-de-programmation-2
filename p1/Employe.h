#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <string>
#include <iostream>
using namespace std;

// Classe représentant un employé
class Employe {
public:
    Employe(const string& nom, double salaire);

	  // Retourne le salaire de l’employé
    double obtenirSalaire() const;

	  // Augmente le salaire selon un pourcentage
    void ajusterSalaire(double pourcentage);

	  // Retourne le nom de l'employé
    string obtenirNom() const;

    // Afficher les valeurs
    void afficher() const;

private:
    string nom;
    double salaire;
};

#endif