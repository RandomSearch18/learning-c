#include <stdio.h>
void functionB() {
  int b = 20;
  printf("Address of b (in functionB): %p\n", (void*)&b);
}

void functionA(int* pointer) {
  int a = 10;
  // int a1 = 1;
  // int a2 = 2;
  // int a3 = 3;
  // int a4 = 4;
  // int a5 = 5;
  printf("Address of a (in functionA): %p\n", (void*)&a);
  printf("Difference between &m and &a %ld bytes\n", &a - pointer);
  functionB();
}
int main() {
  int m = 0;
  printf("Address of m (in main): %p\n", (void*)&m);
  functionA(&m);
  return 0;
}

