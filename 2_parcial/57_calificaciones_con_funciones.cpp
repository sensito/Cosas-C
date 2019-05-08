#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

float validacion(float x){
  if (x < 0 && x >10) {
    return false;}
  else{
    return true;
  }
}
float calificacion_final (float a, float b, float c){
    float cali;
    int CF;
  cali = (a+b+c)/3;
  if (cali > 6) {
    cali = cali + .5;
  }
  CF = cali;
  return CF;
}
  int main() {
    float a,b,c, prom = 0, extraudinario=0;
    char opc,extra = 'n';
    int CF, alumnos;
  do {

      do {
        printf("ingresa la primer calificacion\n");
        scanf("%f",&a );
      } while(validacion(a) == false);
      do {
        printf("ingresa la segunda calificacion\n");
        scanf("%f",&b );
      } while(validacion(b) == false);
      do {
        printf("ingresa la terser calificacion\n");
        scanf("%f",&c );
      } while(validacion(c) == false);

      calificacion_final(a,b,c);

      printf("realisaste extraudinario?\n");
      scanf("%c",&extra);
      extra = getche();
      if (extra ='s') {
        printf("ingresa la calificacion del extra\n");
        scanf("%d", &extraudinario );
      }
      if (extra > CF) {
        printf("%d", extraudinario);
        prom = prom + extraudinario;
      }
      else{
        printf("%d",CF);
        prom = prom + CF;
      }
      alumnos = alumnos + 1;
      printf("tienes mas alumnos\n");
      scanf("%c\n",&opc);
      } while(opc = 's');
      printf("el promedio del grupo es:%f\n", prom/alumnos);
    return 0;
  }
