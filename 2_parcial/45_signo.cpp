#include <stdio.h>
 main(){
   float var,control = 0;
   char simbolo;
   printf("ingresa el signo a desplegar\n");
   scanf("%c", &simbolo);
   printf("ingresar las vesea a desplegar el simbolo\n");
   scanf("%f",&var);
   for (control ; control < var; control = control + 1) {
     printf("simbolo\n");
   }
 }
