# Introduction

En C, les chaînes de caractères sont des vecteurs de caractères (`char` en anglais) et pour stocker un texte, il faut donc avoir créé un tableau de caractères assez grand pour contenir tout le texte. De plus, toutes les chaînes de caractères en C se terminent forcément, dans la mémoire de l'ordinateur, par le caractère `\0` qui ne s'affichera jamais mais permet de savoir que la chaîne est finie.

Pour pouvoir saisir ou afficher une chaîne de caractères avec un `scanf` ou un `printf`, on utilise le symbole `%s`.

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[10] = "Bonjour\0";
    int longueurChaine = 0;

    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long", chaine, longueurChaine);

    return 0;
}
```