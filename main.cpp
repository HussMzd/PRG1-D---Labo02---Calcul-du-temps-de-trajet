/* ---------------------------
Laboratoire : 02
Auteur(s) : Hussein Mazyad
Date : 22 semptembre 2026
But : Calcul du temps de trajet
Remarque(s) :
--------------------------- */

#include <cmath>
#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    int L1 = 6;     // Longueur 1 en km
    int S1 = 5;     // Vitesse 1 en km/h
    int L2;         // Longueur 2 en km (inconnu)
    int S2 = 2;     // Vitesse 2 en km/h
    int dx = 3;     // Delta x en km
    int dy = 10;    // Delta y en km
    double time;    // Temps final (inconnu)

    L2 = sqrt(pow(dx, 2) + pow((dy-L1), 2)); // Calcul de L2
    time = L1/S1 + L2/S2;                                   // Calcul du temps
    std::cout << "Temps de trajet : " << time << " heure(s)" << std::endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}