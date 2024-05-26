#include "structure_bibli.h"


int nbr_ale() {            //fonction qui permet de choisir un nombre aleatoire
    int a = rand() % (20 - 15 + 1) + 15;
    return a;
}