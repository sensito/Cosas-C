#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  float temeratura [24];
  void aceptar(){
    for (int i = 0; i < 24; i++) {
      printf("dame la temperatura de cada hora %d\n", i );
      scanf("%f", &temeratura[i]);
      system("cls");
    }
  }

  void desplegar(){
    printf("reporte de horas\n");
    for (int i = 0; i < 24; i++) {
      printf("%d.-%f\n",i ,temeratura[i]);
    }
  }

  void buscar(int b) {
    for (int y = 0;y < 24; y++) {
      if (temeratura[y] == b) {
        printf("%d %f\n", y , temeratura[y]);
      }
    }
  }

  int mas_alta(){
    int alta=1;
  for (int i = 0; i < 24; i++) {
    if (temeratura[i] > alta) {
      alta = temeratura[i];
    }
  }
  printf("la temperatura mas alta es: %d\n",alta );
  buscar(alta);
  system("pause");
  system("cls");
  }


  int mas_baja(){
    int baja=10;
  for (int i = 0; i < 24; i++) {
    if (temeratura[i] < baja) {
      baja = temeratura[i];
    }
  }

  printf("la temperatura mas baja es: %d\n",baja );
  buscar(baja);
  system("pause");
  system("cls");
  }

  float promedio(){
    float total=1.1;
    for (int i = 0; i < 24; i++) {
      total = total + temeratura[i];
    }
    total = total - 1.1;
    total = total/24.0;

    return total;
  }

  void arriba(){
    printf("las horass que estan arriba de promedio %f\n", promedio());
    for(int i=0;i < 24;i++){
      if (temeratura[i] > promedio()) {
        printf("hora  %d.-\t%f\n",i,temeratura[i]);
      }
    }
  }
  void abajo(){
    printf("las horas que estan abajo del promedio %f\n", promedio());
    for(int i=0;i < 24;i++){
      if (temeratura[i] < promedio()) {
        printf("hora %d.-\t%f\n",i,temeratura[i]);
      }
    }
  }


    int main(int argc, char const *argv[]) {
      aceptar();
      system("pause");
      system("cls");
      mas_alta();
      system("pause");
      system("cls");
      mas_baja();
      system("pause");
      system("cls");
      printf("el promedio de temperaturas es %f\n",promedio());
      system("pause");
      system("cls");
      arriba();
      system("pause");
      system("cls");
      abajo();
      system("pause");
      system("cls");
      desplegar();
      printf("adios :b\n");


      return 0;
    }
