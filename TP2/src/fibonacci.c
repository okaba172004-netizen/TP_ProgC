#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1, Un;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Cas particuliers
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    printf("%d, %d", U0, U1); // Affiche U0 et U1

    // Génération de la suite jusqu'à Un
    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf(", %d", Un);

        // Mise à jour des valeurs
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
