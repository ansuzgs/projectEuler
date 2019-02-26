#include <stdio.h>
#include <math.h>
#include <time.h>

#define fnMAX 4000000

int fibonacci(int);

int main() {
  clock_t tic = clock();
  int n = 2;
  int fn = 1;
  int suma = 0;

  while (fn < fnMAX) {
    if (fn%2==0) {
      suma += fn;
    }
    n++;
    fn = fibonacci(n);
  }

  clock_t toc = clock();
  printf("Elapsed: %.10f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

  printf("%d\n", suma);
  return 0;
}

int fibonacci(int n) {
  return (1/sqrt(5))*pow(((1 + sqrt(5))/2),n) - (1/sqrt(5))*pow(((1 - sqrt(5))/2),n);
}
