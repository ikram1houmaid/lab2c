Projet C++ : Classe Etudiant

Exercice de programmation orientée objet en C++ : création d'une classe Etudiant avec encapsulation, constructeurs, getters/setters et calcul de la moyenne.

Description

La classe Etudiant représente un étudiant avec les attributs suivants :

Attribut	Type	Description
nom	std::string	Nom de l'étudiant
cin	std::string	Numéro de la carte d'identité nationale
note1, note2, note3	double	Notes sur 20

Tous les attributs sont privés (encapsulation). L'accès se fait uniquement par les getters et les setters.

Fonctionnalités
Deux constructeurs : par défaut et paramétré.
Getters (const) et setters pour tous les attributs.
Validation des notes : une note doit être comprise entre 0 et 20, sinon elle est refusée et un message d'erreur est affiché sur std::cerr.
Le constructeur paramétré passe par les setters, donc aucune note invalide ne peut être enregistrée.
Méthode calculerMoyenne() : retourne (note1 + note2 + note3) / 3.0.
Structure du projet
Etudiant/
├── src/
│   ├── Etudiant.h     # Déclaration de la classe
│   ├── Etudiant.cpp   # Implémentation des méthodes
│   └── main.cpp       # Programme de test
└── README.md
Compilation et exécution
Avec Eclipse CDT
Créer un projet : File → New → C++ Project → Hello World C++ Project.
Ajouter Etudiant.h, Etudiant.cpp et main.cpp dans le dossier src.
Compiler avec Project → Build All (Ctrl+B).
Exécuter avec Run → Run (Ctrl+F11). Le résultat s'affiche dans la Console.
En ligne de commande (g++)
bash
g++ src/main.cpp src/Etudiant.cpp -o programme
./programme
Exemple d'utilisation
cpp
#include <iostream>
#include "Etudiant.h"

int main() {
    Etudiant e1("Ahmed Benali", "EE123456", 12.5, 15, 14);
    std::cout << e1.getNom() << " : moyenne = "
              << e1.calculerMoyenne() << "\n";

    Etudiant e2;
    e2.setNom("Sara");
    e2.setNote1(10);
    e2.setNote2(25);   // refusée : "Note2 invalide : 25"
    e2.setNote3(16);
    std::cout << e2.getNom() << " : moyenne = "
              << e2.calculerMoyenne() << "\n";
    return 0;
}
Résultat attendu
Ahmed Benali : moyenne = 13.8333
Note2 invalide : 25 (attendu : 0 a 20)
Sara : moyenne = 8.66667
Problèmes fréquents
Problème	Solution
undefined reference to Etudiant::...	Vérifier que Etudiant.cpp est dans src, puis Project → Clean et recompiler.
Etudiant.h: No such file	Vérifier que .h et .cpp sont dans le même dossier et que l'include utilise des guillemets : #include "Etudiant.h".
Erreur sur std::string	Vérifier #include <string> dans Etudiant.h.
Améliorations possibles
Lever une exception (std::invalid_argument) au lieu d'afficher un message d'erreur.
Ajouter une méthode afficher() ou surcharger operator<<.
Gérer un tableau (std::vector) d'étudiants avec tri par moyenne.
Auteur

Nom : à compléter Filière : INFO, Licence, Semestre 3 Module : à compléter
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/6b1d103d-9826-43b1-8381-5acf8ecb00a2" />
