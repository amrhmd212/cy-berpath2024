#include "structure_bibli.h"

int verif_para_L_l(int longueur, int largeur) { // Fonction pour vérifier les paramètres de longueur et de largeur
    if (longueur < 15 || longueur > 20 || largeur < 15 || largeur > 20) {
        return -15;
    }
    return 0;
}

int verif_para_grille(int** grille) { // Fonction pour vérifier si la grille est allouée
    if (grille == NULL) {
        return -20;
    }
    return 0;
}

int verif_para_tab_de_cible(Cible* T) { // Fonction pour vérifier si le tableau de cibles est alloué
    if (T == NULL) {
        return -25;
    }
    return 0;
}

int verif_para_tab_de_robot(Robot* T) { // Fonction pour vérifier si le tableau de robots est alloué
    if (T == NULL) {
        return -30;
    }
    return 0;
}

void verif_coordonnees(int** grille, int longueur, int largeur, Robot* tab_de_robots, Cible* tab_de_cibles) {// Procédure de      vérification des coordonnées
    int v = verif_para_L_l(longueur, largeur);// Fonction pour vérifier les paramètres de longueur et de largeur
    
    if (v == -15) {
        printf("pb de parametre longueur ou largeur dans la procedure verif_coordonnees\n");
        exit(1);
    }
    int v1 = verif_para_grille(grille);// Fonction pour vérifier si la grille est allouée
    
    if (v1 == -20) {
        printf("Pb allocation grille dans procedure liberation_grille\n");
        exit(2);
    }
    int v2 = verif_para_tab_de_cible(tab_de_cibles);// Fonction pour vérifier si le tableau de cibles est alloué
    
    if (v2 == -25) {
        printf("Pb allocation de tab_de_cibles dans fct verif_coordonnees\n");
        exit(4);
    }
    int v3 = verif_para_tab_de_robot(tab_de_robots);// Fonction pour vérifier si le tableau de robots est alloué
    
    if (v3 == -30) {
        printf("Pb allocation de tab_de_robots dans fct placement_robot\n");
        exit(4);
    }

    longueur = longueur * 2 + 1; // On fait x*2+1 afin de pouvoir mettre les traits sous forme de case 
    largeur = largeur * 2 + 1; // On fait x*2+1 afin de pouvoir mettre les traits sous forme de case 

}

int verif_robot(Robot robot,Cible cible, int** grille, int x, int y){ //fonction pour voir si le robot est sur la cible choisie
    if(grille[robot.posi_robot.x][robot.posi_robot.y]==grille[cible.posi_cible.x][cible.posi_cible.y]){ 
        return 1;         // 1 si le robot a atteint la cible
    }
    else{
        return 0;        //0 si le robot ne l'a pas atteint
    }
}


