#include "Etudiant.h"

#include <iostream>

bool Etudiant::noteValide(double n) {
    return n >= 0.0 && n <= 20.0;
}

// Constructeur par défaut
Etudiant::Etudiant()
    : nom("Inconnu"), cin(""), note1(0), note2(0), note3(0) {}

// Constructeur paramétré : passe par les setters pour valider les notes
Etudiant::Etudiant(const std::string& n, const std::string& c,
                   double n1, double n2, double n3)
    : nom(n), cin(c), note1(0), note2(0), note3(0)
{
    setNote1(n1);
    setNote2(n2);
    setNote3(n3);
}

// Getters
std::string Etudiant::getNom() const { return nom; }
std::string Etudiant::getCin() const { return cin; }
double Etudiant::getNote1() const { return note1; }
double Etudiant::getNote2() const { return note2; }
double Etudiant::getNote3() const { return note3; }

// Setters
void Etudiant::setNom(const std::string& n) { nom = n; }
void Etudiant::setCin(const std::string& c) { cin = c; }

void Etudiant::setNote1(double n) {
    if (noteValide(n)) note1 = n;
    else std::cerr << "Note1 invalide : " << n << " (attendu : 0 a 20)\n";
}

void Etudiant::setNote2(double n) {
    if (noteValide(n)) note2 = n;
    else std::cerr << "Note2 invalide : " << n << " (attendu : 0 a 20)\n";
}

void Etudiant::setNote3(double n) {
    if (noteValide(n)) note3 = n;
    else std::cerr << "Note3 invalide : " << n << " (attendu : 0 a 20)\n";
}

// Moyenne des trois notes
double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}
