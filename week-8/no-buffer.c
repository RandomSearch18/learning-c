#include <unistd.h>
#include <fcntl.h>
int main() {
  int fd = open("out_unbuffered.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd < 0) return 1;
  char c = 'A';
  for (int i = 0; i < 1000000; i++) {
    write(fd, &c, 1); // One syscall per character: 1,000,000 context switches
  }
  close(fd);
  return 0;
}