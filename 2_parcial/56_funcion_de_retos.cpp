#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
  bool par_o_no(int numero){
printf("para saber si tu numero %d es  par\n\n",numero);
    if (numero%2==0) {
        return true;
      }
      else{
        return false;
      }
    }
  bool primo(int numero){
    int control,reciduo=0;
    printf("para saber si tu numero %d es  primo\n\n",numero);
    for (control = 1; control < numero; control++) {
      if (numero%control==0) {
       reciduo++;
      }
    }
    if (reciduo>2) {
      return false;
    }
    else{
      return true;
    }
  }
  long factorial(int numero){
    int control=1;
    long k=1;
    printf("factorial de %d\n",numero);
    for (control = 2; control <= numero; control++) {
      k=control*k;
    }
    printf("el factorial de tu numero es %d\n", k);
  }

  void tabla(float x) {
    float i,rango;
    printf("tabla de multipicar de %f\n\n",x);
    printf("ingresa el rango minimo\n");
    scanf("%f", &i);
    printf("ingresa el rango maximo\n");
    scanf("%f", &rango);
    for (i; i <= rango; i++) {
    printf("%fx%f=%f\n",x,i, x *i);
    }
    }

  void piramide(int altura) {
    int i, m, k,l;
    printf("piramide de asteriscos de %d\n",altura);
    for (i=1;i<=altura;i++) {

      for (m=1;m<=altura-i;m++){
        printf(" ");
      }
      for (k=1;k<2*i;k++){
        printf("*");
      }

    printf("\n");
    }
  }
  void triangulo(int altura) {
    int i, m, k,l;
    printf("triangulo de asteriscos de %d\n",altura);
    for (i=1;i<=altura;i++) {
      for (k=1;k<2*i;k++){
        printf("*");
      }
    printf("\n");
    }
  }
  void cuadrado(int numero) {
    int i,j;
    printf("cuadrado de asteriscos\n");
      for (i = 1; i <= numero; i++) {
        for (j = 1; j <= numero; j++) {
          printf("*");
        }
        printf("\n");
      }
  }
  int main(int argc, char const *argv[]) {
    int acciones=0;
    printf("aplicacion,par o no,numero pactorial,tabla de multiplicar,piramide de asteriscos,cuadrado\n\n");
    printf("ingresa un numero para realisar todas las tareas anteriores menos a 40\n");
    scanf("%d",&acciones);
    system("cls");
    if (par_o_no(acciones)==true) {
        printf("tu numero es par\n");
      } else {
        printf("tu numero no es par\n");
      }
    system("pause");
    system("cls");
    if (primo(acciones)==true) {
      printf("tu numero es primo\n");
    } else {
      printf("tu numero no es primo\n");
    }
    system("pause");
    system("cls");
    factorial(acciones);
    system("pause");
    system("cls");
    tabla(acciones);
    system("pause");
    system("cls");
    piramide(acciones);
    system("pause");
    system("cls");
    triangulo(acciones);
    system("pause");
    system("cls");
    cuadrado(acciones);
    system("pause");
    system("cls");
    printf("adios :b\n");
    return 0;
  }
