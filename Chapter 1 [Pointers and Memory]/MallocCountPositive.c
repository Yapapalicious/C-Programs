#include<stdio.h>
#include<stdlib.h>

int CountPositive(int *plist, int n)
{
   int count = 0;
   int i;
   
   for(i = 0; i < n; i++)
      if(*(plist + i) >  0)
         count++;
   
   return count;
}

int main()
{
   int *plist;
   int n;
   int i;
   
   n = 5;
   
   //Allocates memory
   plist = malloc(sizeof(int) * n);
   
   //Assigns Values
   *(plist + 0) = 10;
   *(plist + 1) = -5;
   *(plist + 2) = 23;
   *(plist + 3) = -8;
   *(plist + 4) = 74;
   
   //Displays Values
   for(i = 0; i < n; i++)
   {
      printf("%d", *(plist + i));
      if(i != n - 1)
         printf(",");
      printf(" ");
   }
   
   printf("\n\nNumber of Positive numbers: %d\n", CountPositive(plist, n));
   
   free(plist);
   
   system("pause");
   return 0;
}
