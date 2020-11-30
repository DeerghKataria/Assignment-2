/*Code for Printing Even Numbers Between 1 and 100
Creator-Deergh Kataria*/
#include <stdio.h>

int main()
{
    int i;
    printf("Even Numbers Between 1 and 100 are....");
    for(i=1;i<=100;i++)
    {
        if (i%2==0)
        printf("%d\t",i);
    }
    return 0;
}
