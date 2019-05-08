#include <stdio.h>
 int main(int argc, char const *argv[]) {
   float dinero;
   printf("ingresa tu dinero actual\n");
   scanf("%f", &dinero);
   if (dinero > 100)
    {
      printf("puedes comprar un dulce\n");
    }
    else
    printf("no puedes comprar un dulce\n");
   return 0;
 }
