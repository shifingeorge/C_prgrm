#include<stdio.h>
int main()
{
  int i, sum=0 ;
  
    for(i=1;i<=50;i++)
    {
        if(i%2!=0)
        sum = sum + i;
    }
  
  printf("\nThe sum of odd numbers between 1 and 50 is : %d\n",sum);
  
}

