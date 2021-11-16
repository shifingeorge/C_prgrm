#include<stdio.h>

int main()
{
    float u,a,t,d;
    printf("Enter initial vel:\n");
    scanf("%f",&u);
    printf("Enter accele:\n");
    scanf("%f",&a);
    printf("Enter total time:\n");
    scanf("%f",&t);
    d = u*(t*t)+((a*t*t)/2);
    printf("The distance travelled by the vehicle is %.2fKm",d);
}
