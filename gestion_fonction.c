#include "Headers.h"

//Plateau de jeu
void plateau(){
    int i; // Boucle 1
    int j; // Boucle 2

    for( i = 0; i < NB_LIGNE_MAT; i++)
    {
        for( j = 0; j < NB_COLON_MAT; j++)
        {
            printf(" |");
        }
        printf("\n");
    }
}

//Demande le nombre de joueur et leur pseudo
void creation_joueur(JOU* tab_joueur){
    int i; // Boucle
    int nb_joueur; // Nombre de joueur

    printf("Saisir le nombre de joueur : \n");
    scanf("%d", &nb_joueur);

    for( i = 0; i < nb_joueur; i++){
        printf("Saisir le pseudo du joueur : \n");
        scanf("%s", tab_joueur[i].nom);
        printf("%s", tab_joueur[i].nom);
    }
}
