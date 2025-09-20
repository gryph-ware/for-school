#include <stdio.h>
#include <stdlib.h>

double giaiThua(int n) {
  if (n == 1) {
    return 1;
  }
  return n * giaiThua(n - 1);
}

int main() {

  int n = 30, k = 5;

  printf("%lf\n",(float)(giaiThua(n))/((giaiThua(n - k)) * giaiThua(k)));        
  
  return EXIT_SUCCESS;  
}  
