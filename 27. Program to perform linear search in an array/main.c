#include<stdio.h>
int main()
{
    int n,i,s,flag=0;
    int ar[1000];
    
    printf("Enter the size:\n");
        scanf("%d",&n);
        
    printf("Enter the elements:\n");
    
    for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        
        printf("Enter the element to search:\n");
            scanf("%d",&s);
            
    for(i=0;i<n;i++)
        {
            if(s==ar[i])
            {
                flag+= 1;
                printf("\nSearch finished:\nElement found at the index %d\n",i+1);
            }   
        }
        
    if (flag == 0)
    
        printf("Search finished:\nElement was not found\n");
    
}

