#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x=4,y=4;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
    if(i==1||i==7||j==x||j==y||j==1||j==7||i==4)
        printf("*");
    else
        printf(" ");
        }
    if (i>3)
    {
        x++;y--;
    }
    else
    {
        x--;y++;
    }
    printf("\n");
    getchar();
    }
}
