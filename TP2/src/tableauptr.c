#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11   // taille des tableaux

int main() {

    int tabInt[N];
    float tabFloat[N];

    srand(time(NULL));   // initialisation du générateur

    /* -------------------------------------------------- */
    /* 1. Remplissage aléatoire des tableaux (avec pointeurs) */
    /* -------------------------------------------------- */

    int *pInt = tabInt;          // pointeur vers le début du tableau d'int
    float *pFloat = tabFloat;    // pointeur vers le début du tableau de float

    for (int i = 0; i < N; i++) {
        *(pInt + i) = rand() % 150;                   // valeurs 0–149
        *(pFloat + i) = (rand() % 1000) / 100.0f;     // valeurs flottantes
    }

    /* -------------------------------------------------- */
    /* 2. Affichage avant modification                    */
    /* -------------------------------------------------- */

    printf("Tableau d'entiers (avant la multiplication) :\n");
    for (int i = 0; i < N; i++)
        printf("%d ", *(pInt + i));
    printf("\n\n");

    printf("Tableau flottant (avant la multiplication) :\n");
    for (int i = 0; i < N; i++)
        printf("%.2f ", *(pFloat + i));
    printf("\n\n");

    /* -------------------------------------------------- */
    /* 3. Multiplication par 3 des valeurs d'indice pair  */
    /*    Parcours uniquement AVEC pointeurs              */
    /* -------------------------------------------------- */

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) { // indice divisible par 2
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3.0f;
        }
    }

    /* -------------------------------------------------- */
    /* 4. Affichage après modification                    */
    /* -------------------------------------------------- */

    printf("Tableau d'entiers (après la multiplication) :\n");
    for (int i = 0; i < N; i++)
        printf("%d ", *(pInt + i));
    printf("\n\n");

    printf("Tableau flottant (après la multiplication) :\n");
    for (int i = 0; i < N; i++)
        printf("%.2f ", *(pFloat + i));
    printf("\n\n");

    return 0;
}
