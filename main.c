#include "Headers.h"

int main() {

    //Variables
    int choix; // Choix de l'utilisateur
    int matrice[NB_LIGNE_MAT][NB_COLON_MAT]; // Plateau de jeu
    JOU tab_joueur[MAX_SIZE_JOU]; // Tableau liste des joueurs

    //Menu
    printf("***************** QWIRKLE *****************\n");
    printf("1 - Consulter les regles\n");
    printf("2 - Commencer une nouvelle partie\n");
    printf("3 - Reprendre une partie sauvegardee\n");
    printf("4 - Consulter les scores\n");
    printf("5 - Quitter le jeu\n");
    scanf("%d", &choix);

    do
    {
        // Consulter les règles
        if (choix == 1)
        {

        }
        // Commencer une nouvelle partie
        else if (choix == 2)
        {
            printf("Choisir le mode de jeu :\n");
            printf("1 - Normal\n");
            printf("2 - Degrade\n");
            scanf("%d", &choix);

            do
            {
                // Mode Normal
                if (choix == 1)
                {
                    creation_joueur(tab_joueur); // Création des joueurs
                }
                // Mode Dégradé
                else if (choix == 2)
                {
                    creation_joueur(tab_joueur); // Création des joueurs
                }
                else
                {
                    printf("Taper 1 ou 2 !\n");
                }
            }while( choix == 1 || choix == 2 );

        }
        // Reprendre une partie sauvegardée
        else if (choix == 3)
        {

        }
        // Consulter les scores
        else if (choix == 4)
        {

        }
        // Quitter
        else if (choix == 5)
        {
            return 0;
        }
    }while( choix < 1 || choix > 5 );
}