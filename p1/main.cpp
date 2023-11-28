#include "Employe.h"
#include "Personnel.h"

int main() {
  // Créer des objets employé
  Employe emp1("John", 1000);
  Employe emp2("Maria", 1500);
  Employe emp3("Peter", 1200);

  // Créer un objet personnel
  Personnel personnel;

  // Ajouter des employés au personnel
  personnel.ajouterEmploye(emp1);
  personnel.ajouterEmploye(emp2);
  personnel.ajouterEmploye(emp3);

  // Imprimer les informations sur les employés
  personnel.augmenterSalaire("Maria", 20.0);
  Employe* emp4 = personnel.trouver("Maria");
  emp4->afficher();
  
  return 0;
}
