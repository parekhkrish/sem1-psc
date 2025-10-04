#include<stdio.h>
int main ()
{
    int array1[]= {1,2,3,4,5,6};
    int array2[3];

    for ( int i = 0; i < 3; i++)
    {
        scanf("%d", &array2[i] );
    }
    
    for ( int i = 0; i < 6; i++)
    {
        printf("%d", array1[i] );
        
    }
    printf("\n");
    for ( int i = 0; i < 3; i++)
    {
        printf("%d", array2[i] );
    }
    
    return 0;



}