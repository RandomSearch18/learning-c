#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int health;
  int attack;
} Enemy;
typedef struct {
  char name[50];
  int health;
  float score;
} PlayerData;
typedef struct {
  int value;
} Coin;
typedef enum {
  TYPE_ENEMY,
  TYPE_PLAYER,
  TYPE_COIN
} ObjectType;
typedef struct {
  ObjectType type; // The tag: tells us which union member is valid
  union {
    Enemy enemy;
    PlayerData player;
    Coin coin;
  } data;
} GameObject;

void describe(const GameObject* obj) {
  switch (obj->type) {
  case TYPE_ENEMY:
    printf("Enemy: %s | HP: %d | ATK: %d\n",
      obj->data.enemy.name,
      obj->data.enemy.health,
      obj->data.enemy.attack);
    break;
  case TYPE_PLAYER:
    printf("Player: %s | HP: %d | Score: %.0f\n",
      obj->data.player.name,
      obj->data.player.health,
      obj->data.player.score);
    break;
  case TYPE_COIN:
    printf("Coin: value = %d\n", obj->data.coin.value);
    break;
  }
}

int main() {
  GameObject objects[3];
  // Enemy
  objects[0].type = TYPE_ENEMY;
  strcpy(objects[0].data.enemy.name, "Goblin");
  objects[0].data.enemy.health = 40;
  objects[0].data.enemy.attack = 8;

  objects[1].type = TYPE_PLAYER;
  strcpy(objects[1].data.player.name, "Alice");
  objects[1].data.player.health = 100;
  objects[1].data.player.score = 500;

  // TODO: Fill objects[2] as a TYPE_COIN with value=50.
  objects[2].type = TYPE_COIN;
  objects[2].data.coin.value = 50;

  for (int i = 0; i < 3; i++) {
    describe(&objects[i]);
  }
  return 0;
}