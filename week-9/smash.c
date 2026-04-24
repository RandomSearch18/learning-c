#include <stdio.h>
#include <stdlib.h>
void win() {
  printf("YOU HACKED THE SYSTEM!\n");
  printf("Control flow hijack successful.\n");
  exit(0);
}
void vulnerable() {
  char buffer[32];
  printf("Enter input: ");
  gets(buffer);
  printf("You entered: %s\n", buffer);
}
int main() {
  printf("Normal execution. win() is never called.\n");
  vulnerable();
  printf("Program finished normally.\n");
  return 0;
}