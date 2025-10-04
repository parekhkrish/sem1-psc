#include<stdio.h>
#include<string.h>
int n = 0;
char str[100];
int printstrlen(int n)
{ 
    while (str[n] != '\0')
    {
        n++;
    }
    return n;
}
int main()
{   
    printf("enter your string :");
    gets(str);
    n = printstrlen(n);
    printf("%d\n", n);  
    return 0;
}