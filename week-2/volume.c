#include <stdio.h>
#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
#define VOL_CONE(r, h) (AREA(r) * (1.0/3) * (h))

int main() {
  float radius = 3;
  float height = 10;
  float volume = VOL_CONE(radius, height);
  printf("Radius: %.2f, Height: %.2f, Volume: %.2f\n", radius, height, volume);
  return 0;
}