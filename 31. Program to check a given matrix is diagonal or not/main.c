#include <stdio.h>
  int main() 
  {
        int i, j, m, n, flag = 0;
        int mat[1000][1000];

        printf("Number of rows:\n");
        scanf("%d", &m);

        printf("Number of columns:\n");
        scanf("%d", &n);
        
        if(m!=n)
            printf("Its not a square matrix (row should be equal to column)");
            
        else
            printf("Enter the elements:\n");
        for (i = 0; i < m; i++) 
        {
                for (j = 0; j < n; j++) 
                {
                        scanf("%d", &mat[i][j]);
                }
        }
        
        for (i = 0; i < m; i++) 
        {
                for (j = 0; j < n; j++) 
                {
                        if (i != j && mat[i][j] != 0) 
                        {
                                flag = 1;
                        }
                }
        }
        printf("Given matrix :\n");
        for (i = 0; i < m; i++) 
        {
                for (j = 0; j < n; j++) 
                {
                        printf("%d ", mat[i][j]);
                }
                printf("\n");
        }
        if (flag == 1) 
        {
                printf("Is not a diagonal mat!!\n");
        } 
        else 
        {
                printf("Is a diagonal mat!!\n");
        }
  }

