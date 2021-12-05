#include<stdio.h>
int main()
{
  int i  , n = 0 , sum = 0;
  int ar[10000];

  printf("Enter a Number\n");
    scanf("%d",&n);

  for(i=0 ; i<n ; i++)
  {
      ar[i] = i+1 ;
      sum+= ar[i] ;
  }
   printf("The Sum of first %d Natural numbers is %d \n",n , sum);

}
