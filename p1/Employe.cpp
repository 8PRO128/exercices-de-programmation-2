#include "Employe.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

// Constructeur avec ;iste d'initialiseurs de champs
Employe::Employe(const string& nom, double salaire) : nom(nom), salaire(salaire) {}

// Obtient le salaire de l'employé
double Employe::obtenirSalaire() const {
  return salaire;
}

// Ajuste le salaire de l'employé
void Employe::ajusterSalaire(double pourcentage) {
  salaire += salaire * pourcentage / 100;
}

// Obtient le nom de l'employé
string Employe::obtenirNom() const {
  return nom;
}

void Employe::afficher() const {
  cout << nom << " - " << to_string(salaire) << endl;
}