#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;   // Programmation en C
    float note2;   // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[5];

    /* ---------------------------- */
    /* Saisie (ici : initialisation) */
    /* ---------------------------- */

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Belaid");
    strcpy(etudiants[2].prenom, "Sara");
    strcpy(etudiants[2].adresse, "7 Rue de Paris, Marseille");
    etudiants[2].note1 = 15.5;
    etudiants[2].note2 = 13.8;

    strcpy(etudiants[3].nom, "Nguyen");
    strcpy(etudiants[3].prenom, "Minh");
    strcpy(etudiants[3].adresse, "5 Avenue du Centre, Toulouse");
    etudiants[3].note1 = 13.0;
    etudiants[3].note2 = 15.2;

    strcpy(etudiants[4].nom, "Haddad");
    strcpy(etudiants[4].prenom, "Yasmine");
    strcpy(etudiants[4].adresse, "19 Boulevard du Parc, Paris");
    etudiants[4].note1 = 17.0;
    etudiants[4].note2 = 14.5;

    /* ---------------------------- */
    /* Affichage                    */
    /* ---------------------------- */

    printf("=== Informations des étudiant.e.s ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prénom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note 1   : %.2f\n", etudiants[i].note1);
        printf("Note 2   : %.2f\n", etudiants[i].note2);
        printf("---------------------------------------\n");
    }

    return 0;
}
