#include <stdio.h>
#include "maths.h"

int usage_count = 0;

static void log_operation(char* op_name) {
  usage_count++;
  printf("LOG: Performing %s\n", op_name);
}

int add(int a, int b) {
  log_operation("addition");
  return a + b;
}
int sub(int a, int b) {
  log_operation("subtraction");
  return a - b;
}
int mult(int a, int b) {
  log_operation("multiplication");
  return a * b;
}
