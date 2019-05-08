#include<stdio.h>

	main(){
		float a,b,h,l,r,pi=3.1416;
		int figura;
		printf("ingresa el numero de la figura \n 1.cuadrado\n 2.triangulo\n 3.circulo\n 4.rectangulo\n 5.romboide\n 6.salir\n");
		scanf("%d", &figura);

		switch(figura){
			case 1:
				printf("ingresa el lado del cuadrado") ;
				scanf("%f", &l);
				a=l*l;
				printf("el area es %f", a);
			break;
			case 2:
				printf("ingresa la base");
				scanf("%f", &b);
				printf("ingresa la altura");
				scanf("%f", &h);
				a=(b*h)/2;
				printf("el area es %f", a);
			break;
			case 3:
				printf("ingresa el radio");
				scanf("%f", &r);
				a=pi*(r*r);
				printf("el area es %f", a);
			break;
			case 4: case 5:
				printf("ingresa la altura");
				scanf("%f", a);
				printf("ingresa la base");
				scanf("%f", b);
				a=b*h;
				printf("el area es %f", a);
			break;
			case 6:
				printf("adios");
			break;
			default: printf("no es opcion valida");
		}
	}
