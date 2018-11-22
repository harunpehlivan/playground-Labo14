#include <stdio.h>
#include <stdlib.h>
#include "strlength.h"

int main() {
  int chaine[100];
  scanf("%s",chaine);
  printf("%d\n", strlength(&chaine[0]));
  return 0;
}