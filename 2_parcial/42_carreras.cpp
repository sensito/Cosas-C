#include <stdio.h>
    main () {
      char txt;
      printf("ingresa la letra de la carrera\n");
      scanf("%c", &txt);

      switch (txt) {
        case 'c':case 'C':
          printf("ciencia de la informatica\n" );
        break;
        case 'a':case 'A':
          printf("administracion industrial\n" );
        break;
        case 'n':case 'N':
          printf("ingenieria en informatica\n" );
        break;
        case 't':case 'T':
          printf("ingenieria en trasporte\n" );
        break;
        case 'i':case 'I':
          printf("ingenieria industrial\n" );
        break;
        default: printf("valor invalido\n");
      }
    }
