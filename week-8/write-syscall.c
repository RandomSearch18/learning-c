#include <unistd.h>
#include <string.h>
int main() {
  const char* msg = "Hello from write()\n";
  write(1, msg, strlen(msg) - 50);
  return 0;
}