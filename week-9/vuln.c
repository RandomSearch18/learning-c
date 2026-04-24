#include <stdio.h>
void vulnerable() {
  char name[16];
  printf("Enter your name: ");
  gets(name);
  printf("Hello, %s!\n", name);
}
int main() {
  vulnerable();
  return 0;
}