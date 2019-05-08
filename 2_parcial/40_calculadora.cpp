#include<stdio.h>
#include <conio.h>
		main() {
		 	float d1,d2;
			char operador, opcion;
			printf ("quiers realisar una operacion?\n");
			scanf ("%c", &opcion);

			while (opcion == 's'){
				printf("ingresa operacion basica a realisar?\n");
				scanf("%f%c%f", &d1, &operador, &d2);

				switch (operador) {
					case '+':
						printf("%f", d1 + d2);
					break;
					case '-':
						printf("%f", d1 - d2);
					break;
					case '*':case 'x':
						printf("%f", d1 * d2);
					break;
					case '/':
						if(d2==0){
							printf("infinito");
					}	else{
							printf("%f",d1/d2);
				    }
				default: printf("operacion invalida");
				}
			printf ("tiene una operacion\n");
			scanf ("%c", &opcion);
			opcion = getche();
		}

	}
