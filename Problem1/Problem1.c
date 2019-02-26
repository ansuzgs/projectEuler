#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
  clock_t tic = clock();

  int n = 0;
  int n_max = atoi(argv[1]);
  int suma = 0;

  while(n < n_max) {
    if (n%3==0 || n%5==0) {
      suma += n;
    }
    n++;
  }

  clock_t toc = clock();
  printf("Elapsed: %.10f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  printf("%d\n", suma);
  return 0;
}
