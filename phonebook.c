#include <stdio.h>
#include <string.h>

// Source - https://stackoverflow.com/a/30372683
// Posted by Lundin, modified by community. See post 'Timeline' for change history
// Retrieved 2026-02-06, License - CC BY-SA 3.0
void remove_spaces(char* restrict str_trimmed, const char* restrict str_untrimmed)
{
  while (*str_untrimmed != '\0')
  {
    if (!isspace(*str_untrimmed))
    {
      *str_trimmed = *str_untrimmed;
      str_trimmed++;
    }
    str_untrimmed++;
  }
  *str_trimmed = '\0';
}


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

  // printf("%s %s %s", names[0], names[1], names[2]);
  // 13 chars wide
  printf("----------------------------------------\n");
  printf("CONTACT LIST\n");
  printf("----------------------------------------\n");
  printf("1. %s | %s\n", names[0], numbers[0]);
  printf("2. Bob | 07700900456\n");
  printf("3. Charlie | 07700900789\n");
  printf("----------------------------------------\n");
}
