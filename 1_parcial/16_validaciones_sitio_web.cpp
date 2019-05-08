#include <stdio.h>
	main()
	{
		float mes_1,mes_2,mes_3,mes_4,x;
		printf ("ingresa las visitas mensuales d los ultimos dos meses de tu sitio web");
		scanf ("%f, %f, %f,%f" , &mes_1, &mes_2, &mes_3, &mes_4);
		x = (mes_1+mes_2+mes_3+mes_4) / 4;
		if (x >= 1000)
		 {
				printf ("se mantiene el sitio");
		 }
		else if(x <= 1000)
		 {
				printf ("se sierra el sitio");
		 }
 }
