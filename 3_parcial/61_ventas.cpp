#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  int ventas [5];
  char marca[5][8];

  void aceptar(){
    for (int i = 0; i < 5; i++) {
      printf("ingresa el nombre de la marca %d\n", i+1 );
      fflush(stdin);
      gets(marca[i]);
      printf("dame las ventas de  %s\n", marca[i] );
      scanf("%d", &ventas[i]);
      system("cls");
    }
  }

  void desplegar(){
    printf("reporte de ventas\n");
    for (int i = 0; i < 5; i++) {
      printf("%d.-%s/%d\n",i+1,marca[i],ventas[i]);
    }
  }

  void buscar(int b) {
    for (int y = 0;y <5; y++) {
      if (ventas[y] == b) {
        printf("%d %s %d\n",y+1 ,marca[y], ventas[y]);
      }
    }
  }

  int mas_alta(){
    int alta=1;
      for (int i = 0; i < 5; i++) {
        if (ventas[i] > alta) {
          alta = ventas[i];
        }
      }
    printf("la mejor ventas es: %d\n",alta );
    buscar(alta);
    system("pause");
    system("cls");
  }


  int mas_baja(){
    int baja=10;
    for (int i = 0; i < 5; i++) {
      if (ventas[i] < baja) {
        baja = ventas[i];
      }
  }

    printf("la venta mas baja es: %d\n",baja );
    buscar(baja);
    system("pause");
    system("cls");
  }

  float promedio(){
    float total=1.1;
    for (int i = 0; i < 5; i++) {
      total = total + ventas[i];
    }
    total = total - 1.1;
    total = total/5.0;

    return total;
  }

  void arriba(){
    printf("las ventas que estan arriba de promedio %f\n", promedio());
    for(int i=0;i < 5;i++){
      if (ventas[i] > promedio()) {
        printf("%d.-%s.-\t%d\n",i+1,marca[i], ventas[i]);
      }
    }
  }

  void abajo(){
    printf("las ventas que estan abajo del promedio %f\n", promedio());
    for(int i=0;i < 5;i++){
      if (ventas[i] < promedio()) {
        printf("%d.-%s.-\t%d\n",i+1,marca[i], ventas[i]);
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
      printf("el promedio de ventas es %f\n",promedio());
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
