#include "05_foo_r.h"

void bar() {
  static int c = 100;
  printf("c: %d\n",c++);
}
