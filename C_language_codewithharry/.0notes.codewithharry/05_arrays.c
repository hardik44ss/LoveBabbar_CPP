#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Index of array start from 0
   int ourarray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   for (int i = 0; i < 10; i++)
   {
      printf("Enter the value of index %d\n", i);
      scanf("%d", &ourarray[i]);
   }
   for (int i =0 ; i<10 ; i++){
      printf("The value for index %d is %d\n", i, ourarray[i]);
   }
   return 0;
}