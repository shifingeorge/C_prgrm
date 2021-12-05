#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number: \n");
    scanf("%d", &n);

    switch(n % 2)
    {
        
        case 0: 
            printf("Number %d is Even\n",n);
            break;

        case 1: 
            printf("Number %d is Odd\n",n);
            break;
    }

    return 0;
}
