#include<stdio.h>
	main()
		{
			float a,b,c;
			printf("Lados de un triangulo");
			scanf("%f,%f,%f",&a,&b,&c);
			if (a==b && a==c)
			{
			printf("escaleno");
			}
			else

				if (a!=b && a!=c && b!=c)
					{
						printf("escaleno");
					}
				else
					{
						printf("izozeles");
					}
		}
