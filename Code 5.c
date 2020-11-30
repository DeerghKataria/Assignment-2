/*Code for Printing The No of Digits
Creator-Deergh Kataria*/
#include <stdio.h>

int main() 
{
    long int num,n;
    int digit=0;
    printf("Enter an integer....");
    scanf("%ld",&num);
    //Saving an Additional Copy of The Number
    n=num;
    //For Fiding The Number of Digits
    while(num!=0) 
    {
        num/=10;     
        digit++;
    }
    //For Output
    printf("Number of digits in %ld is....%d",n,digit);
}
