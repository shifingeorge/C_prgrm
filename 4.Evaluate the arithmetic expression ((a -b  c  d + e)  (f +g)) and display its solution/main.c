#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,z;
    printf("Enter the 7 num:\n");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    z = ((a - b/c * d + e)*(f + g));
    printf("Solution the arithmetic expression ((a -b / c * d + e) * (f +g)) is : %d",z);
}
