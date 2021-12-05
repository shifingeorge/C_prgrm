#include<stdio.h>
int main()
{ 
   int ar[1000][1000];
   int i, j ,n,m;
   printf("Num of rows :\n");
         scanf("%d", &m);
    printf("Num of coloumns :\n");
         scanf("%d", &n);
    printf("Enter the elements:\n");
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
      {
         scanf("%d", &ar[i][j]);
      }
   }
 
   printf("Two Dimensional aray elements:\n");
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
      {
         printf("%d ", ar[i][j]);
      }
      printf("\n");
   }
   return 0;
}
