#include<stdio.h>

int main()

{
    int n , n1 , rev , dig=0 ;
     
    printf("Enter The Number:\n");
    scanf("%d",&n);
    n1=n;
     
    do  /*while(n!=0)*/
    {
        rev = n%10;
        dig = dig*10+rev;
        n = n/10;
    }
    while(n>0);
     
    printf("The Reverse Number of %d is %d\n",n1, dig);

}

