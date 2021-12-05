#include<stdio.h>

int main()
{
    int n,i,sum=0,avg;
    int ar[1000];
    printf("ENTER THE SIZE OF THE ARRAY: \n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS OF THE ARRAY: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum+= ar[i];
    }
    avg = sum/n;
    printf("THE SUM OF THE ARRAY IS : %d\nTHE AVG OF THE ARRAY IS : %d\n",sum,avg);
}



