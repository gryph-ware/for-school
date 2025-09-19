#include <stdio.h>
#include <stdlib.h>

int pascal(int i, int j) {
  if (j == 0 || i == j) {
    return 1;
  }
  return pascal(i - 1, j - 1) + pascal(i - 1, j);
}

int main() {

  int n = 7;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", pascal(i, j));
    }
    printf("\n");    
  }    
  return EXIT_SUCCESS;  
}  
