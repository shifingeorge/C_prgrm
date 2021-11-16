#include<stdio.h>

int main()
{
    float dep,pp,sv,yos;
    printf("Purchase price:\n");
    scanf("%f", &pp);
    printf("Year of service:\n");
    scanf("%f", &yos);
    printf("Annual depreciation:\n");
    scanf("%f", &dep);
    sv=pp-(dep*yos);
    printf("Your item's Salvage value is %.2f",sv);
}
