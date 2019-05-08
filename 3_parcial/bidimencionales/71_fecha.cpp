#include <stdio.h>
int validacion_dia(int mes, int anio);
void avanzar_retroceder(int dia, int mes, int anio);


main () {
	int anio, dia, fech, mes, opc1;
	char opc;
	printf ("Ingresa el a~no\n");
	scanf ("%d", &anio);
	printf ("Ingresa el numero de mes\n");
	scanf ("%d", &mes);
	dia=validacion_dia(mes, anio);

		printf ("Tu fecha en formato corto es %d / %d / %d \n", dia,mes, anio);
		printf ("Tu fecha en formato largo es %d de %d del %d \n", dia,mes, anio);

	avanzar_retroceder(dia,mes,anio);
	}



int validacion_dia(int mes, int anio){
	int dia;

	switch (mes) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			do {
				printf ("Ingresa el dia\n");
				scanf ("%d", &dia);
				} while (dia<1||dia>31);
		break;
		case 2:
			if (anio%=4==0){
				do {
					printf ("Ingresa el dia\n");
					scanf ("%d", &dia);
				} while (dia<1||dia>28);
			}	else {
					do {
						printf ("Tu a~no es bisiesto. Ingresa el dia\n");
						scanf ("%d", &dia);
					} while (dia<1||dia>29);
				}
		break;
		case 4:case 6:case 9:case 11:
		 do {
			printf ("Ingresa el dia\n");
			scanf ("%d", &dia);
			} while (dia<1||dia>30);
		break;
	}
		return dia;
}


void avanzar_retroceder(int dia, int mes, int anio){
	char opc;
	int opc1;
	printf ("Deseas avanzar o retroceder un dia? (s/n)");
	scanf("%s", &opc);
		if (opc=='s') {
			printf ("Que quieres?\n 1-Dia anterior\n 2-Dia posterior\n");
			scanf ("%d", &opc1);
		if (opc1==1) {
			printf ("Tu fecha es %d %d %d", dia-1, mes, anio);
		} else {
			 printf ("Tu fecha es %d / %d / %d", dia+1, mes, anio);
		 	}
	}
}
