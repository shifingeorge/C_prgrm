
//C program to find the sum of the given series

#include <stdio.h>

int fact(int n)    //func to find the fact

{
    int fact = 1 ,i;
    
    for(i=1;i<=n;i++)
        {
            fact*=i;
        }
    return fact;
}

void main()

{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    
    printf("The sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 is : \n%d",sum);
}


