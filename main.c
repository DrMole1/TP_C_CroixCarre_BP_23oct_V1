//Ecrire un programme qui affiche un dessin compos� d'un caract�re lu au clavier en forme de croix. La taille de cette croix, largeur = hauteur sera aussi
//lue au clavier
//Ecrire un programme qui affiche un dessin compos� d'un caract�re lu au clavier en forme de carr�. La taille de ce carr�, largeur = hauteur sera aussi
//lue au clavier. Le deuxi�me caract�re sert � remplir le carr�. Pas de tableaux !!! Commentez le programme
//   aaaaa
//   abbba
//   abbba
//   abbba
//   aaaaa
// Nom du git : TP_C_Titre_NomPr�nom_Date_Version

//on inclue les biblioth�ques n�cessaires � la r�alisation du programme
#include <stdio.h>
#include <stdlib.h>

#define SPACE " "
#define MIN 1

int main()
{
    //d�claration des variables
    char cC='a', cChar='b', cChar2='c';
    int nLarg=1, nCpt=0, nCpt2=0;

    //Programme de la croix : (enlevez les commentaires pour y acc�der, et mettre l'exo du carr� en commentaire)
    /*
    //saisie du caract�re
    printf("Veuillez saisir un caractere :");
    scanf("%c", &cC);

    //saisie de la largeur
    printf("Veuillez saisir une largeur :");
    scanf("%d", &nLarg);


    //boucle imbriqu�e pour le traitement
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
        printf("\n");  //retour chariot pour aller � la ligne
    }
    */


    //Exo du carr� :

    //saisie du caract�re
    printf("Veuillez deux caracteres :\n");
    scanf("%c %c", &cChar, &cChar2);

    //saisie de la largeur
    printf("Veuillez saisir une largeur :");
    scanf("%d", &nLarg);

    //boucle imbriqu�e pour le traitement
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
                printf("%c ", cChar2);  //on remplit le carr� avec le second caract�re
            }
        }
        printf("\n");  //retour chariot pour aller � la ligne
    }







    return 0;
}
