#include "Lecteur.h"
#include <iostream>
using namespace std;

int main() {
  vector<Lecteur> membres; // Vecteur pour stocker les membres du club
  string nom, livrePrefere, dateAdhesion;

  // Boucle pour ajouter des membres
  while (true) {
    cout << "Entrez le nom, le livre préféré et la date d'adhésion du nouveau membre (ou 'fin' pour terminer) : ";
    cin >> nom;
    if (nom == "fin") break;
    cin >> livrePrefere >> dateAdhesion;

    // Vérification si la liste des membres est vide
    if (membres.empty()) {
        cout << "Ajout du premier membre au club." << endl;
    }

    // Ajout du nouveau membre
    membres.push_back(Lecteur(nom, livrePrefere, dateAdhesion));
  }

  // Affichage du nombre total de membres
  cout << "Nombre total de membres dans le club : " << membres.size() << endl;

  return 0;
}
