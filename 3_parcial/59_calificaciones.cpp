#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int calificaciones [38];
  void aceptar(){
    for (int i = 0; i < 38; i++) {
      printf("dame la calificacion del alumno %d\n", i+1 );
      scanf("%d", &calificaciones[i]);
      system("cls");
    }
  }
  void desplegar(){
    system("cls");
    printf("reporte de calificaciones\n");
    for (int i = 0; i < 38; i++) {
      printf("%d.-%d\n",i+1,calificaciones[i]);
    }
  }

    int main(int argc, char const *argv[]) {
      aceptar();
      system("pause");
      desplegar();

      return 0;
    }
