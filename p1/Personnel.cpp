#include "Employe.h"
#include "Personnel.h"

void Personnel::ajouterEmploye(const Employe& employe) {
    membres.push_back(employe);
}

// Trouve un employé par son nom
Employe* Personnel::trouver(const string& nom) {
    for (int i = 0; i < membres.size(); i++) {
      if(membres[i].obtenirNom() == nom) {
        return &(membres[i]);
      }
    }

    return NULL;
}

// Augmente le salaire d'un employé
void Personnel::augmenterSalaire(const string& nom, double pourcentage) {
    Employe* employe = trouver(nom);

    // Si la méthode trouver renvoie une employe, 
    // le "if" est évaluée comme vrai, 
    // sinon, si "NULL", 
    // l'évaluation est fausse
    if (employe) { 
        employe->ajusterSalaire(pourcentage);
    } else {
        cout << "Employé non trouvé." << endl;
    }
}