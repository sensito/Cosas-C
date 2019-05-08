#include <stdio.h>
  main() {
    float tabla, rango, control;
    printf("ingresa la tabla\n");
    scanf("%f", &tabla);
    printf("ingresa el rango minimo\n");
    scanf("%f", &control);
    printf("ingresa el rango maximo\n");
    scanf("%f", &rango);

    for (control; control <= rango; control = control+1) {
      printf("%f,x,%f,=,%f\n",tabla,control, tabla * control);
    }
  }
