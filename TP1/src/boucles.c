#include <stdio.h>

int main() {
    int compteur = 5; // Tu peux changer cette valeur (< 10)

    printf("=== Triangle rectangle avec des boucles for ===\n\n");

    for (int i = 1; i <= compteur; i++) { // lignes
        for (int j = 1; j <= i; j++) {   // colonnes
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
