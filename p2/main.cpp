#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

#include "Etudiant.h"

int main() {
    vector<Etudiant> amis; // Vecteur pour stocker les étudiants
    string nom, dateNaissance;
    
    // Lecture des données depuis un fichier (ou manuellement)
    ifstream fichier("etudiants.txt");
    while (fichier >> nom >> dateNaissance) {
        amis.push_back(Etudiant(nom, dateNaissance));
    }

    // Obtenez le mois en cours (à implémenter)
    string moisEnCours = "05"; // Par exemple, mai

    // Affichage des amis ayant leur anniversaire ce mois-ci
    for (const Etudiant& ami : amis) {
        if (ami.obtenirDateNaissance().substr(3, 2) == moisEnCours) {
            cout << ami.obtenirNom() << " a son anniversaire en mai." << endl;
        }
    }

    return 0;
}
