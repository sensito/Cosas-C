#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

	 float temp[24][7];

	 void llenar(){
	 	int c,r;
	 	for(c = 0;c<7;c++){
			for (r = 0;r<24;r++){
				temp[r][c]=(rand()/50)/ 10.0;
			}
		}
	 }

	 void desplegar(){
	 	int r,c;
	 	printf("reporte de temperatura de la semana\n");
		for (r=0;r<24;r++){
		 printf("%d",r);
			for(c = 0; c < 7;c++){
				printf("\t%.2f",temp[r][c]);
			}
			printf("\n");
		 }
	 }
	 void buscar(float b) {
		 for (int i = 0; i < 24; i++) {
			 for (int y = 0;y < 7; y++) {
				 if (temp[i][y] == b) {
					 printf("dia %d hora %d %f\n", y+1, i , temp[i][y]);
			 }
		  }
		}
	}

		int mas_alta(){
			 float alta=1.0;
			 for (int i = 0; i < 24; i++) {
				 for (int y = 0; y < 7; y++) {
 			 		if (temp[i][y] > alta) {
 				 		alta = temp[i][y];
 			 		}
 		 		}
			 }
		 printf("la temperatura mas alta es: %f\n",alta );
		 buscar(alta);
		 system("pause");
		 system("cls");
		 }

		 int mas_baja(){
	     	float baja=10;
	   		for (int i = 0; i < 24; i++) {
			 		for (int y = 0; y < 7; y++) {
 		     		if (temp[i][y] < baja) {
 		       		baja = temp[i][y];
 		     		}
 		   		}
				}
	   		printf("la temperatura mas baja es: %f\n",baja );
	   		buscar(baja);
	   		system("pause");
	   		system("cls");
	   }

		 float promedio(){
	     float total=1.1;
			 for (int i = 0; i < 24; i++) {
				 for (int y = 0; y < 7; y++) {
  	       total = total + temp[i][y];
  	     }
			 }

	     total = total - 1.1;
	     total = total/168.0;

	     return total;
	   }

		 void arriba(){
	     printf("las temperaturas que estan arriba del promedio %f\n", promedio());
			 for (int i = 0; i < 24; i++) {
				 for(int y=0;y < 7;y++){
  	       if (temp[i][y]> promedio()) {
  	         printf("dia %d hora  %d.-\t%f\n", i, y,temp[i][y]);
  	       }
  	     }
			 }
}

	   void abajo(){
	     printf("las horas que estan abajo del promedio %f\n", promedio());
			 for (int i = 0; i < 24; i++) {
				 for(int y=0;y < 7;y++){
	       if (temp[i][y] < promedio()) {
	         printf("dia %d hora  %d.-\t%f\n", i, y,temp[i][y]);
	       }
	     }
	   }
	 }



	 	int main(int argc, char const *argv[]) {
	 		srand(time(NULL));
	 		llenar();
			printf("en proseso\n" );
      system("pause");
      system("cls");
      mas_alta();
      system("pause");
      system("cls");
      mas_baja();
      system("pause");
      system("cls");
      printf("el promedio de temperaturas es %f\n",promedio());
      system("pause");
      system("cls");
      arriba();
      system("pause");
      system("cls");
      abajo();
      system("pause");
      system("cls");
      desplegar();
			system("pause");
			system("cls");
      printf("adios :b\n");
	 	}
