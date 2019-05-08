#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

  float calificaciones [38];
  char nombre[38][30];

  void aceptar(){

    for (int i = 0; i < 38; i++) {
      printf("ingresa el nombre del alumno %d\n", i+1 );
      fflush(stdin);
      gets(nombre[i]);
      printf("dame la calificacion del alumno %d\n", i+1 );
      scanf("%f", &calificaciones[i]);
      system("cls");
    }
  }

  void desplegar(){
    printf("reporte de calificasiones\n");
    for (int i = 0; i < 38; i++) {
      printf("%d.-%s/%f\n",i+1,nombre[i],calificaciones[i]);
    }
  }

  void buscar(int b) {
    for (int y = 0;y < 38; y++) {
      if (calificaciones[y] == b) {
        printf("%d %s %f\n",y+1 ,nombre[y], calificaciones[y]);
      }
    }
  }

  int mas_alta(){
    int alta=1;

    for (int i = 0; i < 38; i++) {
      if (calificaciones[i] > alta) {
        alta = calificaciones[i];
      }
    }
    printf("la calificacion mas alta es: %d\n",alta );
    buscar(alta);
    system("pause");
    system("cls");
  }


  int mas_baja(){
    int baja=10;
    for (int i = 0; i < 38; i++) {
      if (calificaciones[i] < baja) {
        baja = calificaciones[i];
      }
    }

    printf("la calificacion mas baja es: %d\n",baja );
    buscar(baja);
    system("pause");
    system("cls");
  }

  float promedio(){
    float total=1.1;
    for (int i = 0; i < 38; i++) {
        total = total + calificaciones[i];
      }
    total = total - 1.1;
    total = total/38.0;

    return total;
  }

  void arriba(){
    printf("las calificaciones que estan arriba de promedio %f\n", promedio());

    for(int i=0;i < 38;i++){
      if (calificaciones[i] > promedio()) {
        printf("%d.-%s.-\t%f\n",i+1,nombre[i], calificaciones[i]);
      }
    }
  }

  void abajo(){
    printf("las calificaciones que estan abajo del promedio %f\n", promedio());
    for(int i=0;i < 38;i++){
      if (calificaciones[i] < promedio()) {
        printf("%d.-%s.-\t%f\n",i+1,nombre[i], calificaciones[i]);
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
      printf("el promedio del salon es %f\n",promedio());
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
