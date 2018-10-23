//Ecrire un programme qui affiche un dessin composé d'un caractère lu au clavier en forme de croix. La taille de cette croix, largeur = hauteur sera aussi
//lue au clavier
//Ecrire un programme qui affiche un dessin composé d'un caractère lu au clavier en forme de carré. La taille de ce carré, largeur = hauteur sera aussi
//lue au clavier. Le deuxième caractère sert à remplir le carré. Pas de tableaux !!! Commentez le programme
//   aaaaa
//   abbba
//   abbba
//   abbba
//   aaaaa
// Nom du git : TP_C_Titre_NomPrénom_Date_Version

//on inclue les bibliothèques nécessaires à la réalisation du programme
#include <stdio.h>
#include <stdlib.h>

#define SPACE " "
#define MIN 1

int main()
{
    //déclaration des variables
    char cC='a', cChar='b', cChar2='c';
    int nLarg=1, nCpt=0, nCpt2=0;

    //Programme de la croix : (enlevez les commentaires pour y accéder, et mettre l'exo du carré en commentaire)
    /*
    //saisie du caractère
    printf("Veuillez saisir un caractere :");
    scanf("%c", &cC);

    //saisie de la largeur
    printf("Veuillez saisir une largeur :");
    scanf("%d", &nLarg);


    //boucle imbriquée pour le traitement
    for (nCpt=1 ; nCpt<=nLarg ; nCpt++)
    {
        for(nCpt2=1 ; nCpt2<=nLarg ; nCpt2++)
        {
            if (nCpt==nCpt2 || nCpt+nCpt2==nLarg+1)
            {
                printf("%c", cC);
            }
            else
            {
                printf(SPACE);  //utilisation d'une constante pour optimiser
            }
        }
        printf("\n");  //retour chariot pour aller à la ligne
    }
    */


    //Exo du carré :

    //saisie du caractère
    printf("Veuillez deux caracteres :\n");
    scanf("%c %c", &cChar, &cChar2);

    //saisie de la largeur
    printf("Veuillez saisir une largeur :");
    scanf("%d", &nLarg);

    //boucle imbriquée pour le traitement
    for (nCpt=1 ; nCpt<=nLarg ; nCpt++)
    {
        for(nCpt2=1 ; nCpt2<=nLarg ; nCpt2++)
        {
            if (nCpt == MIN || nCpt == nLarg || nCpt2 == MIN || nCpt2 == nLarg)
            {
                printf("%c ", cChar);
            }
            else
            {
                printf("%c ", cChar2);  //on remplit le carré avec le second caractère
            }
        }
        printf("\n");  //retour chariot pour aller à la ligne
    }







    return 0;
}
