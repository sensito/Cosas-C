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
	 	printf("reporte de tempera de la semana\n");
		for (r=0;r<24;r++){
		 printf("%d",r);
			for(c = 0; c < 7;c++){
				printf("\t%.2f",temp[r][c]);
			}
			printf("\n");
		 }
	 }

	 	int main(int argc, char const *argv[]) {
	 		srand(time(NULL));
	 		llenar();
	 		desplegar();
	 		system("pause");
	 	}
