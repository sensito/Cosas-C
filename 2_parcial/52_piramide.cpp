#include <stdio.h>

   main() {
    int i, m, altura, k,l;
    printf("ingresa la altura de la piramide\n");
    scanf("%d",&altura);

    for (i=1;i<=altura;i++) {

      for (m=1;m<=altura-i;m++){
        printf(" ");
      }
      for (k=1;k<2*i;k++){
        printf("*");
      }

    printf("\n");
    }
}
