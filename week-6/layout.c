#include <stdio.h>
#include <string.h>
#include <stddef.h>

typedef struct {
  char name[50];
  int health;
  float score;
} Player;

struct Bad {
  char a;
  int b;
  char c;
};

struct Good {
  int b;
  char a;
  char c;
};

int main() {
  Player p;
  strcpy(p.name, "Alice");
  p.health = 100;
  p.score = 9750.5f;
  printf("Address of p: %p\n", (void*)&p);
  printf("Address of p.name: %p\n", (void*)&p.name);
  printf("Address of p.health: %p\n", (void*)&p.health);
  printf("Address of p.score: %p\n", (void*)&p.score);
  printf("sizeof(Player): %zu\n", sizeof(Player));

  printf("\n--- struct Bad ---\n");
  printf("sizeof(struct Bad): %zu\n", sizeof(struct Bad));
  printf("offsetof a: %zu\n", offsetof(struct Bad, a));
  printf("offsetof b: %zu\n", offsetof(struct Bad, b));
  printf("offsetof c: %zu\n", offsetof(struct Bad, c));

  printf("\n--- struct Good ---\n");
  printf("sizeof(struct Good): %zu\n", sizeof(struct Good));
  printf("offsetof b: %zu\n", offsetof(struct Good, b));
  printf("offsetof a: %zu\n", offsetof(struct Good, a));
  printf("offsetof c: %zu\n", offsetof(struct Good, c));

  return 0;
}

