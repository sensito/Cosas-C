#include<stdio.h>
	main() {
		 float fi_2,exa,cua,fi;
		 int prom;
		printf("ingresa la calificasion de cuaderno y examen\n");
		scanf("%f,%f", &exa, &cua);
		fi = exa + cua;
		if(fi > 6){
			fi_2 = fi + .5;
		}
		prom = fi_2;
		switch (prom) {
			case 1 : case 2 :case 3 :
				printf("canbiate de carrera");
			break;
			case 4 : case 5:
				printf("casi we");
			break;
			case 6 : case 7:
				printf("pansaste");
			break;
			case 8 :
				printf("bien");
			break;
			case 9 :
				printf("muy bien");
			break;
			case 10 :
				printf("consiguete una vida");
			break;
			default:
			printf("valores mal ingresados");
				}
		}
