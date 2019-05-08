#include <stdio.h>
#include <conio.h>
	int sal_bruto (int cuota, int horas);
	float impuestos(int sb, float sm);


		main (){
			char nombre[20], opc;
			int horas, cuota, sb=0;
			float sn, sm, imp, totalsb=0, totalimp=0;
			printf ("Dame el salario minimo \n");
			scanf ("%f", &sm);
			sm=sm*7;
			printf ("Reporte de nomina\t\n Nombre\t Cuota\t Horas\t Salario bruto\t Impuestos\t Salario neto\n");
			printf ("Hay trabajadores? (s/n)\n");
			scanf ("%s", &opc);
				while (opc=='s') {
					printf ("Como te llamas?\n");
					scanf ("%s", &nombre);
					printf ("Cual es tu cuota?\n");
					scanf ("%d", &cuota);
					printf ("Cuantas horas trabajas?\n");
					scanf ("%d", &horas);
					sb=sal_bruto(cuota, horas);
					imp=impuestos(sb,sm);
					printf ("%s\t %d\t %d\t %d\t %f\t %f\n", nombre, cuota, horas, sb, imp, sb-imp);
					totalsb=totalsb+sb;
					totalimp=totalimp+imp;
					printf ("Hay mas trabajadores?(s/n)\n");
					scanf ("%c", &opc);
					opc=getch();
				}
			printf ("Totales\n");
			printf ("Total de salario bruto %f\n", totalsb);
			printf ("Total de impuestos %f\n", totalimp);
			printf ("Salario neto %f\n", totalsb-totalimp);
		}

int sal_bruto(int cuota, int horas) {
	int sb;
	if (horas<=40||horas>=81){
		sb=cuota*horas;
	}
	if (horas>=41&&horas<=50){
		sb=(cuota*horas)*2;
	}
	if (horas>=51&&horas<=80){
		sb=(cuota*horas)*3;
	}
		return sb;
}

float impuestos(int sb, float sm) {
		float imp;
		if (sb<=(2*sm)) {
			imp=sb;
		}
		if (sb>(2*sm)&&sb<=(5*sm)) {
			imp=sb*.95;
		}
		if (sb>(5*sm)&&sb<=(10*sm)) {
			imp=sb*.90;
		}
		if (sb>(10*sm)&&sb<=(20*sm)){
			imp=sb*.80;
		}
		if (sb>(20*sm)) {
			imp=sb*.65;
		}
		return imp;
}
