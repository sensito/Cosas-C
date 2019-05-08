#include<stdio.h>
	main()
	{
		float x,y,z,prom,CT;
		printf("ingresa tus datos");
		scanf("%f,%f,%f", &x ,&y ,&z);
		prom = (x+y+z) / 3;
		if (prom>6)
		{
		CT = prom + 0.5;
		printf("tu caificacion es: %f",CT);
		}
	}
