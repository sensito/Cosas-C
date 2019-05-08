#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
  int main(int argc, char const *argv[]) {
    float a,b,h,l,r,pi=3.1416;
    int opcion;
    char opc;
    printf("apicacion se area y perimetros de figuras\n\n");
    printf("quieres realisar un calculo de area y perimetro\n");
    scanf("%c",&opc);
    system("cls");

    while(opc == 's' || opc == 'S'){
      printf("escoje un opcion\n1.-circulo\n2.-triangulo\n3.-cuadrado\n4.-rectangulo\n5.-romboide\n6.-adios\n");
      scanf("%d",&opcion);
      system("cls");

      switch (opcion) {
        case 1:
          printf("ingresa el radio\n");
          scanf("%f", &r);
          a=pi*(r*r);
          printf("el area es %f\n", a);
          printf("el valor del perimetro de tu circulo es %f\n", (2*r) * pi);
          break;
        case 2:
          printf("ingresa la base\n");
          scanf("%f", &b);
          printf("ingresa la altura\n");
          scanf("%f", &h);
          a=(b*h)/2;
          printf("el area es %f", a);
          printf("el valor de el perimetro de tu tringulo es %f\n", b+b+b);
          break;
        case 3:
          printf("ingresa el lado del cuadrado\n") ;
          scanf("%f", &l);
          a=l*l;
          printf("el area es %f\n", a);
          printf("el valor del perimetro de tu cuadrado es %f\n", l+l+l+l);
          break;
        case 4: case 5:
      		printf("ingresa la altura\n");
      		scanf("%f", a);
      		printf("ingresa la base\n");
      		scanf("%f", b);
      		h=a*b;
      		printf("el area es %f\n", h);
          printf("el valor del perimetro de tu rectangulo es %f\n",(a+b)*2 );
      		break;
        case 6:
          printf("adios :b\n");
        default:
          printf("opcion inexistente\n");
          break;
      }
      system("cls");
      printf("tienes mas figuras\n" );
      scanf("%c",&opc);
      opc = getche();
    }
    return 0;
  }
