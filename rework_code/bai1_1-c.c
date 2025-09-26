#include <stdio.h>
#include <stdlib.h>

int main() {

  for (int i = 0; i < 90; i++) {
    int soNhan = i / 10 + 1;
    int soBiNhan = i % 10 + 1;

    printf("%d * %d = %d \n", soNhan, soBiNhan, soNhan * soBiNhan);

    if (soBiNhan == 10) {
      printf("\n");
    }
    
  }    
  return EXIT_SUCCESS;  
}  
