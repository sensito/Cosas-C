#include <stdio.h>


void circulo() {
  float a,b,h,l,r,pi=3.1416;
  printf("ingresa el radio\n");
  scanf("%f", &r);
  a=pi*(r*r);
  printf("el area es\n:%f", a);
}
void triangulo() {
  float a,b,h,l,r,pi=3.1416;
  printf("ingresa la base\n");
  scanf("%f", &b);
  printf("ingresa la altura\n");
  scanf("%f", &h);
  a=(b*h)/2;
  printf("el area es \n%f", a);
}
void cuadrado() {
  float a,b,h,l,r,pi=3.1416;
  printf("ingresa el lado del cuadrado\n") ;
  scanf("%f", &l);
  a=l*l;
  printf("el area es\n%f", a);
}
void rectangulo() {
  float a,b,h,l,r,pi=3.1416;
  printf("ingresa la altura\n");
  scanf("%f", a);
  printf("ingresa la base\n");
  scanf("%f", b);
  a=b*h;
  printf("el area es\n%f", a);
}
void romboide() {
  float a,b,h,l,r,pi=3.1416;
  printf("ingresa la altura\n");
  scanf("%f", a);
  printf("ingresa la base\n");
  scanf("%f", b);
  a=b*h;
  printf("el area es\n%f", a);
}

  main() {
    float a,b,h,l,r,pi=3.1416;
    int figura;
    printf("ingresa el numero de la figura \n 1.cuadrado\n 2.triangulo\n 3.circulo\n 4.rectangulo\n 5.romboide\n 6.salir\n");
    scanf("%d", &figura);

    switch(figura){
      case 1:
        cuadrado();
      break;
      case 2:
        triangulo();
      break;
      case 3:
        circulo();
      break;
      case 4:
        rectangulo();
      break;
      case 5:
        romboide();
      break;
      case 6:
        printf("adios\n");
      break;
      default:
        printf("mal dato\n" );
      break;
      }
    }
