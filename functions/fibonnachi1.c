#include<stdio.h>
int n, q , fib ;
void fibonnachi();

int main()
{
     fibonnachi();
}

void fibonnachi()
{
    int i=0, j=1, n, sum=0, k ;
    printf("enter your number");
    scanf("%d", &n);

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