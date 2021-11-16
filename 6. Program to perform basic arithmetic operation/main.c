#include<stdio.h>
void main()
{
    int a,b,sum,dif,mul;
    float divi,mod;
    printf("Enter any two numbers :\n");
    scanf("%d%d",&a,&b);
    sum = a + b;
    dif = a - b;
    mul = a * b;
    divi = a / b;
    mod = a % b;
    printf("\n Sum of:%d",sum);
    printf("\n Difference:%d",dif);
    printf("\n Multiplication:%d",mul);
    printf("\n Division:%f",divi);
    printf("\n Modulus:%f",mod);
}

