#include <stdio.h>
#include <stdlib.h>

int toHop(int n, int k) {
  if (k == 0 || n == k) {
    return 1;
  } else if (k > n) {
    return 0;
  }
  return toHop(n - 1, k) + toHop(n - 1, k - 1);
}

int main() {

  int n = 10, k = 5;

  printf("%d\n", toHop(n, k));
  
  return EXIT_SUCCESS;  
}  
