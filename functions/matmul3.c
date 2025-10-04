#include<stdio.h>
int m, n, p, q ;
int mat1[50][50];
int mat2[50][50];
int result[50][50];
int matrixmultiplication ()
{
    printf("enter the row and column of first matrix :");
    scanf("%d %d", &m, &n );
    printf("enter the row and column of first matrix :");
    scanf("%d %d", &p, &q );
    if ( n == p )
    { 
        printf("enter the elementas of first matrix :\n");
        for (int  i = 0 ; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("enter your a%d%d element :", i, j );
                scanf("%d", &mat1[i][j]);
            }
        }
        for (int  i = 0 ; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", mat1[i][j] );
            }
            printf("\n");   
        }
        printf("enter the elementas of second matrix :\n");
        for (int  i = 0 ; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("enter your b%d%d element :", i, j );
                scanf("%d", &mat2[i][j]);
            }
        }
         for (int  i = 0 ; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", mat2[i][j] );       
            }
            printf("\n");
        }
            //here i am perfoming multiplication
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    result[i][j] = 0 ;
                    for (int k = 0; k < n ; k++)
                    {
                        result[i][j] += mat1[i][k]*mat2[k][j]; 
                    }   
                }   
            }
        return 0;      
     }   
    else
    {
        printf("you can not multiply this matrices");
    }   
}
int main()
{
    if (matrixmultiplication () == 0)
    {
        printf("the multiplication of two matrices is : \n");
        for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");  
            } 
        }
    return 0;
}