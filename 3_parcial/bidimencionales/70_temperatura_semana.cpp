#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

	 float temp[24][7];

	 void llenar(){
	 	for(int c = 0;c<7;c++){
			for (int r = 0;r<24;r++){
				temp[r][c]=(rand()/50)/ 10.0;
			}
		}
	 }

	 void desplegar(){

	 	printf("reporte de temperatura de la semana\n");
		for (int r=0;r<24;r++){
			printf("%d",r);
			for(int c = 0; c < 7;c++){
				printf("%.2f\t%.2f\n",temp[r][c]);
			}
		}
	 }

	 	int main(int argc, char const *argv[]) {
	 		srand(time(NULL));
	 		llenar();
	 		desplegar();
	 		system("pause");
	 	}
