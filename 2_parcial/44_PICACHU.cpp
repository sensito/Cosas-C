#include <stdio.h>
   main() {
     float turno,picachu, bolbasor, ataque_1, ataque_2;
     picachu = 100;
     bolbasor = 100;
     turno = 1;
     printf("ingresa el poder de ataque de picachu");
     scanf("%d", &ataque_1);
     printf("ingresa el poder de ataque de bolbasor");
     scanf("%d", &ataque_2);

     while (picachu == 0 || bolbasor == 0) {
       if (turno == 1) {
          printf("%f", bolbasor = bolbasor - ataque_1);
          turno = 0;
       } else {
          printf("%f", picachu = picachu - ataque_2);
          turno = 1;
        }
      }
    if (picachu <= 0) {
        printf("bolbasor gano");
    } else {
         printf("picachu");
      }
  }
