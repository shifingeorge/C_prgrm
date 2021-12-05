#include<stdio.h>    
int main()
  {  
    int a[100][100] , b[100][100] , mul[100][100] ;
    int i , j , k , m , n , m1 , n1;     
    
    printf("Number of rows in MatA:\n");    
      scanf("%d",&m);  

    printf("Number of columns in MatA:\n");    
      scanf("%d",&n);  

    printf("Enter the matrix A element\n");

    for(i=0;i<m;i++)    
    {    
      for(j=0;j<n;j++)    
      {    
        scanf("%d",&a[i][j]);    
      }    
    }

    printf("Number of rows in MatB:\n");    
      scanf("%d",&m1);  

    printf("Number of columns in MatB:\n");    
      scanf("%d",&n1);

    if(n!=m1) 

      printf("Multiplication of Matrix's with this order cant be done");

    else 

      printf("enter the matrixB element\n");

    for(i=0;i<m1;i++)

      {

          for(j=0;j<n1;j++)

            {

              scanf("%d",&b[i][j]);    
            
            }    
      }    
    
      printf("Multiply of the matrix\n");

        for(i=0;i<m;i++)

          {

              for(j=0;j<n1;j++)

                { 

                    mul[i][j]=0;
                    for(k=0;k<n1;k++)

                      {

                          mul[i][j]+=a[i][k]*b[k][j];

                      }

                }

          }    
    
    for(i=0;i<m;i++)

      {

          for(j=0;j<n1;j++)

            {

                printf("%d\t",mul[i][j]);

            }

          printf("\n");  

      }

}  
