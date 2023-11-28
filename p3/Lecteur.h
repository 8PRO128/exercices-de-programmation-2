#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
using namespace std;

class Lecteur {
  public:
    Lecteur(string& nom, string& livrePrefere, string& dateAdhesion);

  private:
    string nom;
    string livrePrefere;
    string dateAdhesion;
};

#endif