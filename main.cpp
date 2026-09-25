/* ---------------------------
Laboratoire : 02
Auteur(s) : Hussein Mazyad
Date : 22 semptembre 2026
But : Calcul du temps de trajet
Remarque(s) : Projet posté sur GitHub (https://github.com/HussMzd/PRG1-D---Labo02---Calcul-du-temps-de-trajet)
--------------------------- */

#include <cmath>
#include <iostream>

int main() {
    double L1 = 6;     // Longueur 1 en km
    double S1 = 5;     // Vitesse 1 en km/h
    double L2;         // Longueur 2 en km (inconnu)
    double S2 = 2;     // Vitesse 2 en km/h
    double dx = 3;     // Delta x en km
    double dy = 10;    // Delta y en km
    double time;    // Temps final (inconnu)

    L2 = sqrt(pow(dx, 2) + pow((dy-L1), 2)); // Calcul de L2
    time = L1/S1 + L2/S2;                                   // Calcul du temps
    std::cout << "Temps de trajet : " << time << " heure(s)" << std::endl;

    return 0;
}