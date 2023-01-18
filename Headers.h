//
// Created by WilliamCorreia on 18/01/2023.
//

#ifndef PROJET_2_EN_C_HEADERS_H
#define PROJET_2_EN_C_HEADERS_H

#include <stdio.h>

#define MAX_SIZE_TAB 100
#define NB_LIGNE_MAT 12
#define NB_COLON_MAT 26
#define MAX_SIZE_JOU 4

// Structures

struct tuile{
    char couleur[MAX_SIZE_TAB];
    char symbole[MAX_SIZE_TAB];
}; typedef struct tuile TUI;

struct joueur{
    char nom[MAX_SIZE_JOU];
    int score;
    //Ajouter piece
}; typedef struct joueur JOU;

// Déclarations de fonctions

void creation_joueur(JOU* tab_joueur);
void menu();

#endif //PROJET_2_EN_C_HEADERS_H
