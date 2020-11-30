/*For Finding Last and First Digit of a Number
Creator-Deergh Kataria*/
#include <stdio.h>

int main() 
{
    int num,digit=0,i=0;
    
    printf("Enter The Number....");
    scanf("%d",&num);
    
    for(i=0;num>0;i++)
    {
        digit=num%10;
        //Condition for the last digit
        if(i==0)
        {
            printf("The Last Digit is....%d",digit);
        }
        //Condition for the first digit.
        if(num<10)
        {
            printf("\nThe First Digit is....%d",digit);
        }
        num/=10;
    }
    return 0;
}