#include<stdio.h>
int main()
{
    int i,n1,n2;
    int a[100],b[100],sum[100];
    
    printf("The size of the array A:\n");
      scanf("%d",&n1);
        
    printf("Enter the elements in the matrix A:\n");
    
    for(i=0;i<n1;i++)
    {
        
            scanf("%d",&a[i]);
            
    }
    
      
    printf("The size of the array B:\n");
        scanf("%d",&n2);
    
    printf("Enter the elements in the matrix B:\n");
    
    for(i=0;i<n2;i++)
    {
        
          scanf("%d",&b[i]);
          
    }
    
    for(i=0;i<n2&&i<n1;i++)
    {
            sum[i]=a[i]+b[i];
    }
    printf("Sum of the entered two matrix is :\n");
    for(i=0;i<n1&&i<n2;i++)
    {
        
         printf("%d ",sum[i]);
        
    }
}



