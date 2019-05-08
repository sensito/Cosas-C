#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
	main() {
	 float fi_2,exa,cua,fi;
	 int prom;
	 char opc;

		 do {
		 	system("cls");
		 	printf("ingresa la calificasion de cuaderno y examen\n");
 			scanf("%f,%f", &exa, &cua);
 			fi = exa + cua;

			if(fi > 6){
 				fi_2 = fi + .5;
				 system("cls");
 			}
 			prom = fi_2;

			switch (prom) {
 				case 1 : case 2 :case 3 :
 					printf("canbiate de carrera\n");
 				break;
 				case 4 : case 5:
 					printf("casi we\n");
 				break;
 				case 6 : case 7:
 					printf("pansaste\n");
 				break;
 				case 8 :
 					printf("bien\n");
 				break;
 				case 9 :
 					printf("muy bien\n");
 				break;
 				case 10 :
 					printf("consiguete una vida\n");
 				break;
 				default:
 				printf("valores mal ingresados\n");
 					}
					printf("quieres saber otra calificacion?\n");
					scanf("%c",&opc);
				  opc = getche();
		 } while(opc =='s');
		system("cls");
		printf("adios :b\n");
		}
