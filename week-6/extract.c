#include <stdio.h>
#include <stdint.h>
int main() {
  uint32_t x = 0xAABBCCDD;
  uint16_t byte0 = x & 0xFF00; // Lowest byte
  uint16_t byte1 = (x >> 8) & 0xFF; // Second byte
  uint16_t byte2 = (x >> 16) & 0xFF;
  uint16_t byte3 = (x >> 24) & 0xFF;
  printf("0x%08X broken into bytes:\n", x);
  printf(" byte0 (lowest): 0x%04X\n", byte0);
  printf(" byte1: 0x%04X\n", byte1);
  printf(" byte2: 0x%04X\n", byte2);
  printf(" byte3: 0x%04X\n", byte3);
  return 0;
}