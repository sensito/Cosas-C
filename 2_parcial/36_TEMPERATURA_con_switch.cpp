#include <stdio.h>
#include <conio.h>
	main(){

		int opc;
		char opcion;
		float F,C;
		printf ("QUIERES UN CAMBIO DE TEMPERATURA");
		scanf ("%c", &opcion);
		while (opcion == 's'){
			printf("1.-C-F \n 2.- F-C");
			scanf("%d",&opc);
			switch (opc) {
				case 1 :
					printf("Dame los celius a grados f");
					scanf("%f",&C);
					F = 1.8 * C +32;
					printf("La temperatura es:%f",F );
				break;
			  case 2 :
					printf("ingresa tus grados f que canviar a grados c");
					scanf("%f",&F );
					C = (F-32) / 1.8;
					printf("tus grados c son:%f",C );
				break;
				default:
				printf("operacion invalida");
			}
			printf ("tiene una operacion\n");
			scanf ("%c", &opcion);
			opcion = getche();
			}

		}
