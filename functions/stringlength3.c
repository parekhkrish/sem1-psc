#include<stdio.h>
#include<string.h>
int n = 0;
char str[100];
int printstrlen()
{ 
    printf("enter your string :");
    gets(str);
    while (str[n] != '\0')
    {
        n++;
    }
    return n;
}
int main()
{   
    n = printstrlen();
    printf("%d\n", n);  
    return 0;
}