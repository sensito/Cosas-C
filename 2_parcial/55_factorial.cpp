#include <stdio.h>
  main() {
    int numero,k=1,control=1;
    printf("ingresa tu numero primo\n");
    scanf("%d", &numero);

    for (control = 2; control <= numero; control++) {
      k=control*k;
    }
    printf("%d", k);
  }
