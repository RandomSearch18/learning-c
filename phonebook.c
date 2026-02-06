#include <stdio.h>
#include <string.h>

void read_name(char buffer[]) {
  printf("Enter name: ");
  fgets(buffer, 128, stdin);
}

void read_number(char buffer[]) {
  printf("Enter phone number: ");
  fgets(buffer, 64, stdin);
}

void read_details(char name[], char number[]) {
  read_name(name);
  read_number(number);
  printf("\n");
}

int main() {
  char names[3][128] = {};
  char numbers[3][64] = {};

  read_details(names[0], numbers[0]);
  read_details(names[1], numbers[1]);
  read_details(names[2], numbers[2]);

  printf("%s %s %s", names[0], names[1], names[2]);
}
