#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[50];
  int health;
  float score;
} Player;

int main() {
  int n = 3;
  // Array of POINTERS to Player, stored on the heap
  Player** players = malloc(n * sizeof(Player*));
  if (players == NULL) return 1;

  // Each pointer points to its own individually allocated Player
  for (int i = 0; i < n; i++) {
    players[i] = malloc(sizeof(Player));
    if (players[i] == NULL) return 1;
    snprintf(players[i]->name, 50, "Player%d", i + 1);
    players[i]->health = 100;
    players[i]->score = i * 500.0f;
  }
  for (int i = 0; i < n; i++) {
    printf("%s: HP=%d Score=%.0f\n",
      players[i]->name,
      players[i]->health,
      players[i]->score);
  }

  // TODO: Free correctly - each individual Player first, then the array
  for (int i = 0; i < n; i++) {
    free(players[i]);
  }
  free(players);

  return 0;
}