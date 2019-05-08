#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
  main() {
    float tc,dinero;
    char opc;
    int opcion;
    printf("quieres un cambio de divisa\n");
    scanf("%c",&opc);

    while (opc == 's' || opc == 'S') {
      printf("opcion a realisar\n1.pesos a dolar\n2.dolar a pesos\n3.pesos a euros\n4.euros a pesos\n5.salir\n");
      scanf("%d",&opcion);
        switch (opcion) {
          case 1:
            printf("ingresa el dinero y cambio\n");
            scanf("%f,%f",&dinero,&tc);
            printf("%f\n",dinero / tc );
          break;
          case 2:
            printf("ingresa el dinero y cambio\n");
            scanf("%f,%f",&dinero,&tc);
            printf("%f\n",dinero * tc );
          break;
          case 3:
            printf("ingresa el dinero y cambio\n");
            scanf("%f,%f",&dinero,&tc);
            printf("%f\n",dinero / tc );
          break;
          case 4:
            printf("ingresa el dinero y cambio\n");
            scanf("%f,%f",&dinero,&tc);
            printf("%f\n",dinero * tc );
          break;
          case 5:
            printf("adios\n");
          break;
          default:
            printf("dato mal ingresado\n");
          break;
        }
      printf("tienes un cambio?\n");
      scanf("%c",&opc);
      opc = getche();

    }
  }
