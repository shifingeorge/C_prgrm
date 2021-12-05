
//C program to check whether a number is a prime number or not using the function.

#include<stdio.h>

int PrimeOrNot(int n)     //func to check the prime or not
{
    int i=2;
    while(i<=n/2)
    {
         if(n%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}

int main()
{
    int n,p;
	
    printf(" Input a number : ");
    scanf("%d",&n);
    
    p = PrimeOrNot(n);     //calling func
    
    if(p==1)
        printf(" The number is a prime number.\n");
        
    else
      printf(" The number is not a prime number.\n");
      
    return 0;
}
