#include <stdio.h>

#define MYWORLD 1

int main(void) {

  int a = 2;

  printf("Hello World, you are number %d\n", MYWORLD);

  printf("a = %d in line %d\n", 
        a,
        __LINE__);  
  printf("File :%s\n", __FILE__ );
  printf("Date :%s\n", __DATE__ );
  printf("Time :%s\n", __TIME__ );

  return 0;

}