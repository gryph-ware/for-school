#include <stdio.h>
#include <stdlib.h>

int sumOf(int *nums, unsigned int size) {
  if (size == 0) {
    return nums[0];
  }
  return nums[size] + sumOf(nums, size - 1);
}

int main() {

  int arrOfNums[] = {1, 2, 3, 4};
  unsigned int size = sizeof(arrOfNums) / sizeof(arrOfNums[0]);
  
  printf("%d", sumOf(arrOfNums, size - 1));
  
  return EXIT_SUCCESS;  
}  
