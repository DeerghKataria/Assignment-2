/*Code for Printing Alphabets from 'a' to 'z'
Creator-Deergh Kataria*/
#include <stdio.h>

int main()
{ 
    char ch;
    printf("Printing All The Alphabets....\n");
    for(ch='a';ch<='z';ch++)
    {
        printf("%c\t",ch);
    }
    return 0;
}
