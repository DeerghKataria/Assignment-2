/*Code for swapping the first and the last digit
Creator-Deergh Kataria*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int num,mult=0,digit=0,swap_no=0,i=0;
    
    printf("Enter The Number....");
    scanf("%d",&num);
    //For finding the total number of digits.
    mult=log10(num);
    
    for(i=0;num>0;i++)
    {
        digit=num%10;
        
        //Condition for the last digit
        if(i==0)
        {
            swap_no+=digit*pow(10,mult);
        }
        //Condition for the first digit.
        else if(num<10)
        {
            swap_no+=digit;
        }
        else
        {
            swap_no+=digit*pow(10,i);
        }
        num/=10;
    }
    //Printing the swapped no.
    printf("The Swapped Number is....%d",swap_no);
    
    return 0;
}