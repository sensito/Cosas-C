#include <stdio.h>
  main ()
  {
    float entrada, x, pago;
    pago = 1100;
    printf("ingresa tus entrada\n");
    scanf("%f",&entrada);
    if (entrada >= 50)
     {
       x = pago + 200;
       printf("tu sueldo es:%f\n", x );
     }
     else
     printf("tu sueldo es:%f\n", pago );
  }
