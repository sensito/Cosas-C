#include <stdio.h>
#include <conio.h>
	main(){

		int angulo;
		char opcion;
		printf ("tienes un angulo?\n");
		scanf ("%c", &opcion);
		while (opcion == 's'){
			do {
				printf ("ingresa un angulo\n");
				scanf ("%d",&angulo);
      }
      while(angulo < 0 || angulo > 180);
				if( angulo > 90){
					if(angulo == 180){
						printf("llano\n");
					}else
						printf ("obtuso\n");
				}	else if(angulo == 90){
						printf ("recto\n");
					}	else{
							printf("agudo\n");
						}
		printf("tienes un angulo?\n");
		scanf ("%c",&opcion);
		opcion = getche();
			}
	}
