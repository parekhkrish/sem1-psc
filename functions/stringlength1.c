#include<stdio.h>
#include<string.h>
void printstrlen()
{
    int n = 0;
    char str[100];
    printf("enter your string :");
    //fgets(str, sizeof str, stdin);
    gets(str);
    while (str[n] != '\0')
    {
        n++;
    }
    
    printf("%d\n", n);
}
int main()
{
    printstrlen();
    return 0;
}