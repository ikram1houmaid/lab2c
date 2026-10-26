#include <iostream>

#include "Etudiant.h"

int main() {
    Etudiant e1("Ahmed Benali", "EE123456", 12.5, 15, 14);
    std::cout << e1.getNom() << " (" << e1.getCin() << ") : moyenne = "
              << e1.calculerMoyenne() << "\n";   // 13.8333

    // Test de la validation : 25 est refusée, note2 reste à 0
    Etudiant e2;
    e2.setNom("Sara");
    e2.setNote1(10);
    e2.setNote2(25);   // "Note2 invalide : 25"
    e2.setNote3(16);
    std::cout << e2.getNom() << " : moyenne = "
              << e2.calculerMoyenne() << "\n";   // (10 + 0 + 16) / 3 = 8.6667

    return 0;
}
