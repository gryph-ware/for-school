#include <stdio.h>
#include <stdlib.h>

unsigned int lengthOf(char *str) {
  if (*str == '\0') {
    return 0;
  }
  return 1 + lengthOf(str + 1);
}

int main() {

  char str[] = "chanh";

  printf("%u", lengthOf(str));
  
  return EXIT_SUCCESS;  
}  
