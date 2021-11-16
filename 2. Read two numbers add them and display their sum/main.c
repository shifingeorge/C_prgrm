#include <stdio.h>
int main()
{
    int a,b,sum; 
    printf("Enter the two numbers to add:\n"); //input the numbers
    scanf("%d%d",&a,&b); //initialize the numbers
    sum = a + b;
    printf("The sum is : %d",sum);
    return 0;
}
