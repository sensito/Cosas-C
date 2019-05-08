#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
  float pesos_a_dolars(float tc) {
    float dinero;
    printf("pesos->dolares\n");
    printf("ingresa el dinero que cambiar a dolares\n");
    scanf("%f",&dinero);
    printf("%f\n",dinero / tc );
  }
  float dolar_a_pesos(float tc) {
    float dinero;
    printf("dolares->pesos\n");
    printf("ingresa el dinero que canbiar a pesos\n");
    scanf("%f",&dinero);
    printf("%f\n",dinero * tc );
  }
  float pesos_a_euros(float tc) {
    float dinero;
    printf("pesos->euros\n");
    printf("ingresa el dinero que cambiar a euros\n");
    scanf("%f",&dinero);
    printf("%f\n",dinero / tc );
  }
  float euros_a_pesos(float tc) {
    float dinero;
    printf("euros->pesos\n");
    printf("ingresa el dinero que canbiar a pesos\n");
    scanf("%f",&dinero);
    printf("%f\n",dinero * tc );
  }


    main() {
      float dolar,dinero,euro;
      char opc;
      int opcion;
      printf("ingresa el valor de el dolar\n");
      scanf("%f",&dolar);
      system("cls");
      printf("ingresa el valor de el euro\n");
      scanf("%f", &euro );
      system("cls");
      printf("quieres un cambio de divisa\n(s,n)\n");
      scanf("%c",&opc);
      opc = getche();

      while (opc == 's' || opc == 'S') {
        system("cls");
        printf("opcion a realisar\n1.pesos a dolar\n2.dolar a pesos\n3.pesos a euros\n4.euros a pesos\n5.salir\n");
        scanf("%d",&opcion);
        system("cls");

        switch (opcion){
          case 1:
            pesos_a_dolars(dolar);
          break;
          case 2:
            dolar_a_pesos(dolar);
          break;
          case 3:
            pesos_a_euros(euro);
          break;
          case 4:
            euros_a_pesos(euro);
          break;
          case 5:
            printf("adios:b\n");
          break;
          default: printf("opcion inexistente\n");
          break;
        }
        printf("quieres otro cambio?\n");
        scanf("%c",&opc);
        opc = getche();
      }
      system("cls");
      printf("adios :b\n");
    }
