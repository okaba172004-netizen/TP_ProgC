#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;        // division entière
    int modulo = a % b;          // reste de la division entière

    // Opérateurs logiques (comparaisons)
    int egal = (a == b);         // égalité
    int superieur = (a > b);     // supériorité

    // Affichage des résultats
    printf("=== Utilisation des opérateurs arithmétiques et logiques ===\n\n");

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("a + b = %d\n", addition);
    printf("a - b = %d\n", soustraction);
    printf("a * b = %d\n", multiplication);
    printf("a / b = %d\n", division);
    printf("a %% b = %d\n\n", modulo);

    printf("a == b ? %d\n", egal);
    printf("a > b  ? %d\n", superieur);

    return 0;
}
