/*Code For Printing all ASCII Characters
Creator-Deergh Kataria*/
#include <stdio.h>

int main()
{   int i;
    for(i=0; i<=256; i++)
    {
        printf("ASCII Value of Character %c....%d\n", i, i);
    }
    return 0;
}