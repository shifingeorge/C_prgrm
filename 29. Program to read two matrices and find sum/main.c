#include<stdio.h>
int main()

{
    int i,j,n,m,a[100][100],b[100][100],sum[100][100];
    
    printf("No.of rows :\n");
      scanf("%d",&m);
      
    printf("No.of columns:\n");
        scanf("%d",&n);
        
    printf("Enter the elements in the matrix A:\n");
    
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
    printf("Enter the elements in the matrix B:\n");
    
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
        
    printf("Sum of the entered two matrix is :\n");
    
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",sum[i][j]);
            }
            
            printf("\n");
        }
}

