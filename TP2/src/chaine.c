#include <stdio.h>

int main() {
    char s1[100] = "Bonjour";
    char s2[100] = "Monde";
    char copie[100];
    char concat[200];

    int i = 0;
    int longueur = 0;

    /* ------------------------------------- */
    /* 1. Calcul du nombre de caractères     */
    /* ------------------------------------- */

    while (s1[i] != '\0') {
        longueur++;
        i++;
    }

    printf("Longueur de \"%s\" = %d\n", s1, longueur);

    /* ------------------------------------- */
    /* 2. Copie de s1 dans copie[]           */
    /* ------------------------------------- */

    i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';  // fin de chaîne

    printf("Copie de s1 : \"%s\"\n", copie);

    /* ------------------------------------- */
    /* 3. Concaténation de s1 et s2          */
    /* ------------------------------------- */

    i = 0;
    int j = 0;

    // Copier d’abord s1 dans concat
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }

    // Ajouter ensuite s2 à la suite
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }

    concat[i] = '\0'; // Terminer la chaîne

    printf("Concatenation de s1 et s2 : \"%s\"\n", concat);

    return 0;
}
