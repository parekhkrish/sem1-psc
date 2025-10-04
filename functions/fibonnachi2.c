#include<stdio.h>
int i=0, j=1, n, sum=0, k ;
int n, q , fib ;
void fibonnachi(int n);

int main()
{   
    printf("enter your number");
    scanf("%d", &n);
    fibonnachi(n);
}

void fibonnachi(int n)
{
    
   

    //printf("%d %d ", i, j);

    for ( k = 0; k < n; k++)
    {
        //sum = i+j;
        printf(" %d ", sum );
        i=j;
        j=sum;
        sum = i+j;
        
    }
}