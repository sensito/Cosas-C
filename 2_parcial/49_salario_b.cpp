#include <stdio.h>
#include<conio.h>
   main() {

    int horas,cuota,salario,total_a = 0,total_empleados;
    char opc;
    cuota = 25;
    total_empleados = 0;
    printf("deseas sacar un salario\n" );
    scanf("%c",&opc);
    do{
      printf("ingresa las horas de trabajo\n");
      scanf("%d",&horas);
      salario = horas * cuota;
      total_a = total_a + salario;
      total_empleados = total_empleados + 1;
      printf("tu salarios es\n:%d\n",salario);
      printf("tienes mas empleados?\n" );
      scanf("%c",&opc);
      opc = getche();
    }while (opc == 's' || opc == 'S');
    printf("total de empleados es\n:%d\n",total_empleados);
    printf("total a pagar\n:%d\n", total_a);
  }
