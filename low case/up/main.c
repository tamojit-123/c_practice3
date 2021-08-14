#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("\n Enter any character in upper case: ");
    scanf("%c",&ch);
    printf("\n The character in lower case is : %c", ch+32);
    printf("\n Enter any character in lower case: ");
    scanf("%c",&ch);
    printf("\n The character in upper case: %c", ch-32);
    return 0;
}
