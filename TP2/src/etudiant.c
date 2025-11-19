#include <stdio.h>

int main() {
    // Tableaux pour 5 étudiant.e.s
    char noms[5][30] = {
        "Durand", "Martin", "Belaid", "Nguyen", "Haddad"
    };

    char prenoms[5][30] = {
        "Alice", "Lucas", "Sara", "Minh", "Yasmine"
    };

    char adresses[5][100] = {
        "12 Rue des Fleurs, Paris",
        "8 Avenue du Centre, Lyon",
        "5 Boulevard Sud, Marseille",
        "23 Rue Lafayette, Lille",
        "17 Rue du Parc, Toulouse"
    };

    float noteC[5] = {14.5, 12.0, 16.5, 13.0, 15.0};        // Notes en Programmation en C
    float noteSE[5] = {15.0, 11.5, 14.0, 16.0, 13.5};      // Notes en Système d'exploitation

    // Affichage des informations
    printf("=== Informations des étudiant.e.s ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom        : %s\n", noms[i]);
        printf("Prénom     : %s\n", prenoms[i]);
        printf("Adresse    : %s\n", adresses[i]);
        printf("Note C     : %.2f\n", noteC[i]);
        printf("Note S.E   : %.2f\n", noteSE[i]);
        printf("---------------------------------------\n");
    }

    return 0;
}
