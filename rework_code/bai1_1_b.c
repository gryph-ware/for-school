#include <stdio.h>
#include <stdlib.h>

void clearChar() {
  int c;
  while((c = getchar()) != '\n' && c != EOF);  
}

int main() {

  int diem;
  
  /*chi nhan diem khi n >= 0*/
  while (scanf("%d", &diem) != 1 || diem < 0) {
    clearChar();
  }

  if (diem < 50)
    printf("truot");
  else if (diem < 65)
    printf("tb");
  else if (diem < 80)
    printf("kha");
  else
    printf("gioi");
  
  return EXIT_SUCCESS;  
}  
