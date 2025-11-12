#include <stdio.h>

int main() {
    int somme = 0;  // variable pour stocker la somme

    printf("=== Somme des nombres divisibles par 5 ou 7 (sans ceux divisibles par 11) ===\n\n");

    // Boucle de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si le nombre est divisible par 11, on ignore cette itération
        if (i % 11 == 0) {
            continue; // passe directement au nombre suivant
        }

        // Si le nombre est divisible par 5 ou 7, on l'ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000, on arrête la boucle
        if (somme > 5000) {
            printf("Somme > 5000, arrêt de la boucle à i = %d\n", i);
            break; // stoppe complètement la boucle
        }
    }

    // Affichage du résultat final
    printf("Somme finale = %d\n", somme);

    return 0;
}
