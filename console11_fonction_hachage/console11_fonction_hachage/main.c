//
//  main.c
//  console11_fonction_hachage
//
//  Created by asap on 17/04/2024.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Eleve Eleve;
struct Eleve{
    char *nom;
    char *prenom;
    int moyenne;
};
typedef struct Element Element;
struct Element{
    
};

//proto
int hachage(char* chaine);


int main(int argc, const char * argv[]) {
    
    int hach=hachage("Antonin DVN");
    printf("L'indice de Antonin DVN est : %d\n", hach);
    
    return 0;
}

int hachage(char* chaine){
    int i=0, nombreHach=0;
    for (i=0;chaine[i]!='\0';i++){
        nombreHach+=chaine[i];
    }
    nombreHach%=100;
    return nombreHach;
}


