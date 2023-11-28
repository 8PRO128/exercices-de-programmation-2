#include "Etudiant.h"

#include <iostream>

Etudiant::Etudiant(const string& nom, const string& dateNaissance)
                  : nom(nom), dateNaissance(dateNaissance) {}

// Obtient le nom de l'étudiant
string Etudiant::obtenirNom() const {
  return nom;
}

// Obtient la date de naissance
string Etudiant::obtenirDateNaissance() const {
  return dateNaissance;
}