#include <stdio.h>
int main(int argc, char const *argv[]) {
  int control,numero=0,reciduo=0;
  printf("ingresa un numero\n");
  scanf("%d",&numero);
  for (control = 1; control < numero; control++) {
    if (numero%control==0) {
     reciduo++;
    }
  }
  if (reciduo>2) {
    printf("tu numero no es primo\n");
  }
  else{
    printf("tu numero es primo\n");
  }

  return 0;
}
