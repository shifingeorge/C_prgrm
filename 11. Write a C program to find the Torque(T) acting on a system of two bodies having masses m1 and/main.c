#include<stdio.h>

int main()
{
    float m1,m2,T,g=9.8;
    printf("enter the masses of 2 bodies:\n");
    scanf("%f%f",&m1,&m2);
    T = (((2*m1*m2)/(m1+m2))*g);
    printf("Torque %.2fNm",T);
}
