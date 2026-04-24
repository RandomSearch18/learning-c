#include <stdio.h>
#include <string.h>
void check_password() {
  int is_admin = 0;
  char password[8];
  printf("Enter password: ");
  gets(password);
  if (strcmp(password, "secret") == 0) {
    is_admin = 1;
  }
  if (is_admin) {
    printf("Access granted.\n");
  } else {
    printf("Access denied.\n");
  }
}
int main() {
  check_password();
  return 0;
}