#include <stdio.h>
#include <stdint.h>

union FloatBits {
  float f;
  uint32_t bits;
};

int main() {
  union FloatBits x;
  x.f = 1.0f;
  printf("1.0f -> bits: 0x%08X\n", x.bits);
  x.f = -1.0f;
  printf("-1.0f -> bits: 0x%08X\n", x.bits);
  x.f = 2.0f;
  printf("2.0f -> bits: 0x%08X\n", x.bits);
  // Check the sign bit directly
  x.f = -3.14f;
  if (x.bits >> 31)
    printf("-3.14f is negative (sign bit = 1)\n");
  return 0;
}