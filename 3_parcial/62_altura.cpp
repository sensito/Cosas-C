#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  float altura [24];
  char nombre[24][30];
  void aceptar(){
    for (int i = 0; i < 24; i++) {
      printf("ingresa el nombre del alumno %d\n", i+1 );
      fflush(stdin);
      gets(nombre[i]);
      printf("dame la altura del alumno %d\n", i+1 );
      scanf("%f", &altura[i]);
      system("cls");
    }
  }

  void desplegar(){
    printf("reporte de altura\n");
    for (int i = 0; i < 24; i++) {
      printf("%d.-%s/%f\n",i+1,nombre[i],altura[i]);
    }
  }

  void buscar(float b) {
    for (int y = 0;y < 24; y++) {
      if (altura[y] == b) {
        printf("%d %s %f\n",y ,nombre[y], altura[y]);
      }
    }
  }

  int mas_alta(){
    float alta=1;
    for (int i = 0; i < 24; i++) {
      if (altura[i] > alta) {
        alta = altura[i];
      }
    }
    printf("la altura mas alta es: %d\n",alta );
    buscar(alta);
    system("pause");
    system("cls");
  }


  int mas_baja(){
    float baja=10;
    for (int i = 0; i < 24; i++) {
      if (altura[i] < baja) {
        baja = altura[i];
      }
    }

    printf("la altura mas baja es: %d\n",baja );
    buscar(baja);
    system("pause");
    system("cls");
  }

  float promedio(){
    float total=1.1;
    for (int i = 0; i < 24; i++) {
      total = total + altura[i];
    }
    total = total - 1.1;
    total = total/24.0;

    return total;
  }

  void arriba(){
    printf("las altura que estan arriba de promedio %f\n", promedio());
    for(int i=0;i < 24;i++){
      if (altura[i] > promedio()) {
        printf("%d.-%s.-\t%f\n",i+1,nombre[i], altura[i]);
      }
    }
  }

  void abajo(){
    printf("las altura que estan abajo del promedio %f\n", promedio());
    for(int i=0;i < 24;i++){
      if (altura[i] < promedio()) {
        printf("%d.-%s.-\t%f\n",i+1,nombre[i], altura[i]);
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
      printf("el promedio de alturas es %f\n",promedio());
        system("pause");
        system("cls");
      arriba();
        system("pause");
        system("cls");
      abajo();
        system("pause");
        system("cls");
      desplegar();
        system("pause");
        system("cls");
      printf("adios :b\n");


      return 0;
    }
