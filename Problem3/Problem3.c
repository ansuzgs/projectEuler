#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  long numero = atol(argv[1]);
  long divisor = 2;
  long i = 0;

  long *p;
  p = (long *) malloc(100);

  while( numero != 1) {
    if (numero%divisor == 0) {
      *(p+i) = divisor;
      i++;
      numero = numero/divisor;
    } else {
      divisor = divisor+1;
    }
  }
  printf("%d", *(p+i-1));
  free(p);
  return 0;
}

/*
while numero != 1:
    if numero%x ==0:
        divisores.append(x)
        numero = numero/x
    else:
        x = x+1
*/
