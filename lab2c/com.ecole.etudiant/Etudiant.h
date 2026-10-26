#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string cin;
    double note1;
    double note2;
    double note3;

    // Validation factorisée : une note valide est dans [0, 20]
    static bool noteValide(double n);

public:
    // Constructeurs
    Etudiant();
    Etudiant(const std::string& n, const std::string& c,
             double n1, double n2, double n3);

    // Getters
    std::string getNom() const;
    std::string getCin() const;
    double getNote1() const;
    double getNote2() const;
    double getNote3() const;

    // Setters
    void setNom(const std::string& n);
    void setCin(const std::string& c);
    void setNote1(double n);
    void setNote2(double n);
    void setNote3(double n);

    // Méthode métier
    double calculerMoyenne() const;
};

#endif
