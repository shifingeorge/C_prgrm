#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    float sq,sqr;
    printf("enter the number\n");
    scanf("%d",&num);
    sq = pow(num,2);
    sqr= sqrt(num);
    printf("The square and square root of the %d is : %.2f and %.2f",num,sq,sqr);
}
