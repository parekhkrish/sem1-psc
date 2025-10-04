#include<stdio.h>
#include<string.h>
int main ()
{
    char str[20] ;
    int i = 0;

    printf("Enter your statement :");
    fgets(str, sizeof str, stdin );
    
    int n = strlen(str);

        for (int i = 0; str[i] != '\0'; i++) {
            // Convert lowercase to uppercase
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }   
            // Convert uppercase to lowercase
            else if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }

    printf("converted stetment : %s\n", str );
    printf("no of cherecter in string :%d", n );  
    return 0 ;
}
