# Introduction

En C, les chaînes de caractères sont des vecteurs de caractères (`char` en anglais) et pour stocker un texte, il faut donc avoir créé un tableau de caractères assez grand pour contenir tout le texte. De plus, toutes les chaînes de caractères en C se terminent forcément, dans la mémoire de l'ordinateur, par le caractère `\0` qui ne s'affichera jamais mais permet de savoir que la chaîne est finie.

Pour pouvoir saisir ou afficher une chaîne de caractères avec un `scanf` ou un `printf`, on utilise le symbole `%s`.

### size_t strlen(const char* chaine);

`strlen` est une fonction qui calcule la longueur d'une chaîne de caractères (sans compter le caractère `\0`).

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

### char* strcpy(char* destination, const char* source);

La fonction `strcpy` permet de copier une chaîne à l'intérieur d'une autre.

```C runnable
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char chaine[100] = "Texte\0", copie[100];

    strcpy(copie, chaine); // On copie "chaine" dans "copie"

    // Si tout s'est bien passé, la copie devrait être identique à chaine
    printf("chaine vaut : %s\n", chaine);
    printf("copie vaut : %s\n", copie);

    return 0;
}
```