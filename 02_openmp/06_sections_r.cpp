#include <cstdio>
#include <omp.h>

int main() {
  int i = 1;
#pragma omp parallel num_threads(2)
#pragma omp sections private(i)
  {
#pragma omp section
    printf("%d\n",++i);
#pragma omp section
    printf("%d\n",++i);
  }
}
