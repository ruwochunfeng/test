#include <stdio.h>


int main(void)
{
  int ceshi[5] = {1,2,3,4,5};
  printf("hello new environment\n");

  printf("test gdb function result: %d \n", ceshi[8]);
  int * ptr =NULL;
  *ptr = 10;
  return 0;
}
