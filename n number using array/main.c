#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,array[20];

    printf("enter the number of element in the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("array[%d] = ", i );
        scanf("%d",&array[i]);
    }
    printf("the array element are ");
    for (i=0;i<n;i++)
        printf("\t %d", array[i]);
    return 0;
}
