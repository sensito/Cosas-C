#include<stdio.h>
	main() {
		char dia;
		printf("ingresa la primer letra de un dia");
		scanf("%c", &dia);

		switch (dia) {
			case 'l': case 'L':
				printf("Lunes");
			break;
			case 'm': case 'M':
				printf("Lunes");
			break;
			case 'w': case 'W':
				printf("Lunes");
			break;
			case 'j': case 'J':
				printf("Lunes");
			break;
			case 'v': case 'V':
				printf("Lunes");
			break;
			case 's': case 'S':
				printf("Lunes");
			break;
			case 'd': case 'D':
				printf("Lunes");
			break;
			default: printf("valor invalido");
		}
	}
