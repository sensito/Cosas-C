#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

	 float ventas[5][7];
   char marcas[5][6]={"coca", "fanta", "donas", "cafe", "red"};
	 char dias[7][4]={"lun", "mar", "mie", "jue", "vie", "sab", "dom"};


	void llenar(){
	 	int c, r;
    printf("en proseso\n" );
	 	for(c = 0;c<7;c++){
			for (r = 0;r<5;r++){
				ventas[r][c]=(rand()/10)/ 10.0;
			}
		}
	}

	 void registrar_dia() {
		 int i,y;
	 	for ( size_t i = 0; i < 7; i++) {
	 		for (size_t y = 0; y < 5; y++) {
	 			printf("ingresa el valor del producto %s del dia %s \n",marcas[y], dias[i]);
				scanf("%f", &ventas[y][i]);
	 		}
	 	}
	 }


	 void registrar_producto() {
		 system("cls");
		 int i,y;
		 printf("dime de que producto deseas hacer el registro\n");
		 for (size_t i = 0; i < 5; i++) {
		 	printf("%d.- %s\n", i+1, marcas[i]);
		 }
		 scanf("%d", &y );
		 system("cls");
		 y--;
 	 for ( size_t i = 0; i < 7; i++) {
		 printf("%s\n\n", marcas[y]);
		 printf("ingresa las ganancias del dia %s\n", dias[i]);
		 scanf("%s",&ventas[y][i]);
		 system("cls");
	 }
}

	 void modificar_por_dia_y_por_producto() {


	 }
	 void buscar_producto() {
		 system("cls");
		 int i,y;
		 printf("dime, que producto deseas buscar?\n");
		 for (size_t i = 0; i < 5; i++) {
		 	printf("%d.- %s\n", i+1, marcas[i]);
		 }
		 scanf("%d", &y );
		 system("cls");
		 y--;
		 printf("%s\n\n", marcas[y]);
		 for (size_t i = 0; i < 7; i++) {
		 	printf("%.2f del dia %s\n", ventas[y][i], dias[i] );
		 }
	 }
	 void buscar_venta(/* arguments */) {
	 	/* code */
	 }
	 void reporte_dia(/* arguments */) {
	 	/* code */
	 }
	 void reporte_semana(/* arguments */) {
		 int r,c;
		 printf("reporte de ventas de la semana\n");
		 for (r=0;r<5;r++){
			printf("%d",r);
			 for(c = 0; c < 7;c++){
				 printf("\t%.2f",ventas[r][c]);
			 }
			 printf("\n");
			}
	 }
	 void promedio_articulo(/* arguments */) {
	 	/* code */
	 }
	 void promedio_dia(/* arguments */) {
	 	/* code */
	 }
	 void promedio_general(/* arguments */) {
	 	/* code */
	 }
	 void menu() {
		 int opc=0;
		 do {
			 opc=0;
	 	printf("que quieres hacer?\n1.- registrar por dia\n2.- registrar producto\n3.- mofificar por dia y por producto\n4.- buscar por producto\n5.- buscar venta\n6.- reporte dia\n7.-reporte semana\n8.-promedio articulo\n9.-promedio dia\n10.-promedio semana\n11.- salir\n\n" );
		scanf("%d",&opc);

			switch (opc) {
				case 1:
				registrar_dia();
				break;
				case 2:
				registrar_producto();
				break;
				case 3:
				modificar_por_dia_y_por_producto();
				break;
				case 4:
				 buscar_producto();
				break;
				case 5:
				buscar_venta();
				break;
				case 6:
				 reporte_dia();
				break;
				case 7:
				reporte_semana();
				break;
				case 8:
				promedio_articulo();
				break;
				case 9:
				promedio_dia();
				break;
				case 10:
				promedio_general();
				break;
				case 11:
				break;
				default:
				printf("ingresa un valor valido\n");
				break;
			}
			system("pause");
      system("cls");

		} while(opc != 11);
			printf("adios :b\n");
	 }

	 	int main(int argc, char const *argv[]) {
			srand(time(NULL));
			llenar();
			menu();

		}
