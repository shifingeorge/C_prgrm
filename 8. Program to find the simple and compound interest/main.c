#include<stdio.h>
#include<math.h>

int main()
{
    int p,t,n,P;
    float r,si,ci;
    {
        printf("Enter Principle, Rate of interest and Time:\n");//simple interest
        scanf("%d %f %d", &p,&r,&t);
        si=(p*r*t)/100;
        printf("Your Simple interest is %f rupees.\n", si);
        printf("\n");
    }
    {
        printf("Enter Principle, Interest Rate:\n");//compound Interest
        scanf("%d%f",&P,&r);
        printf("Time and number of times interest applied:\n");
        scanf("%d%d",&t,&n);
        ci = P * pow((1+r/n),n*t);
        printf("Your compound interest is %.2f.",ci);
    }
}
