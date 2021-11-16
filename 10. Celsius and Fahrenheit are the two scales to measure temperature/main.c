#include<stdio.h>

int main()
{
    float c,f;
    {
        printf("Enter your value in Celsius: \n");
        scanf("%f",&c);
        f=c*1.8;
        f=f+32;
        printf("Your answer is %.2fF",f);
    }
}

