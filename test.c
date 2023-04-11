#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

 //(A + 1) = a[1]
  p = &n;
  *(p + 3) = 100; //changer

  printf("Address of n is: %p\n\n", &n);
  printf("The address of a is: %p\n", &a);


  /* ...so that this prints 98\n */
  printf("a[0] = %d\n", a[0]);
   printf("a[1] = %d\n", a[1]);
    printf("a[2] = %d\n", a[2]);
     printf("a[3] = %d\n", a[3]);
      printf("a[4] = %d\n", a[4]);
 
  
  return (0);
}