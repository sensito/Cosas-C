#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

  int temeratura [24];


  void aceptar(){
    for (int i = 0; i < 24; i++) {
      printf("dame la temperatura de cada hora %d\n", i );
      scanf("%d", &temeratura[i]);
      system("cls");
    }
  }


  void desplegar(){
    system("cls");
    printf("reporte de horas\n");

    for (int i = 0; i < 24; i++) {
      printf("%d.-%d\n",i ,temeratura[i]);
    }
  }

    int main(int argc, char const *argv[]) {
      aceptar();
      system("pause");
      desplegar();

      return 0;
    }
