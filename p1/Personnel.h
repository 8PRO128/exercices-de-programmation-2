#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Employe.h"

class Personnel {
  public:
    void ajouterEmploye(const Employe& employe);
    Employe* trouver(const string& nom);
    void augmenterSalaire(const string& nom, double pourcentage);
  
  private:
    vector<Employe> membres; // Liste des employés
};

#endif