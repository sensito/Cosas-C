#include<stdio.h>
#include<conio.h>

	main() {
		float d1,d2;
	 	char operador, opcion;
		printf ("quieres realisar una operacion?\n[s]i,[n]o\n");
		scanf ("%c", &opcion);

		while (opcion == 's'){

			printf("ingresa operacion basica a realisar?\nEjemplo: 2+2\n");
			scanf("%f%c%f", &d1, &operador, &d2);

			switch (operador) {
				case '+':
					printf("%f\n", d1 + d2);
				break;
				case '-':
					printf("%f\n", d1 - d2);
				break;
				case '*':case 'x':
					printf("%f\n", d1 * d2);
				break;
				case '/':
					if(d2==0){
						printf("infinito\n");
					} else{
							printf("%f\n",d1/d2);
				    }
				default:
					printf("operacion invalida\n");
				}
		printf ("tiene una operacion?\n[s]i,[n]o\n");
		scanf ("%c", &opcion);
		opcion = getche();
		}

	}
