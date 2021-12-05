#include<stdio.h>
int main()
{
    int ar[100],n,i;
    printf("ENTER THE SIZE OF THE ARRAY: \n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN ARRAY: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("ELEMENTS IN THE ARRAY:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",ar[i]);
    }
    
}
