#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
   bool validacion(float);
   void calificacion_final (float, float, float, int&);
   main() {
    float a,b,c, prom = 0, extraordinario=0;
    char opc = 'n',extra = 'n';
    int CF = 0, alumnos = 0;
  do {
      do {
        system("cls");
        printf("ingresa la primer calificacion\n");
        scanf("%f",&a );
        system("cls");
      } while(validacion(a) == false);
      do {
        printf("ingresa la segunda calificacion\n");
        scanf("%f",&b );
        system("cls");
      } while(validacion(b) == false);
      do {
        printf("ingresa la terser calificacion\n");
        scanf("%f",&c );
        system("cls");
      } while(validacion(c) == false);

      calificacion_final(a,b,c,CF);
      printf("realisaste extraordinario?\n");
      scanf("%c",&extra);
      extra = getche();
      system("cls");
      if (extra =='s') {
        printf("ingresa la calificacion del extra\n");
        scanf("%d", &extraordinario);
        system("cls");
      }

      if (extraordinario > CF) {
        printf("tu calificacion es %d\n", extraordinario);
        prom = prom + extraordinario;
      }
      else{
        printf("tu calificaion es %d\n",CF);
        prom = prom + CF;
      }
      alumnos = alumnos + 1;
      printf("tienes mas alumnos\n");
      scanf("%c",&opc);
    } while(opc == 's');
      printf("el promedio del grupo es:%f\n", prom/alumnos);
  }
  bool validacion(float x){
    if (x < 0 && x >10) {
      return false;}
    else{
      return true;
    }
  }
  void calificacion_final (float a, float b, float c, int& CF){
    float cali;
    cali = (a+b+c)/3;
    if (cali > 6) {
      cali = cali + .5;
    }
    CF = cali;
  }
