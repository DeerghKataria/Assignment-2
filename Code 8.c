/*Code for Finding the Frequency of a Digit
Creator-Deergh Kataria*/  
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long num;
    int digit,rem,freq=0;
    //Taking The Input
    printf("Enter The Number....");
    scanf("%ld",&num);
    printf("Enter The Digit to be Counted....");
    scanf("%d",&digit);
    
    //Finding the Frequency of Digit
    while(num!=0)
    {   
        rem=num%10;
        if(rem==digit)
        {
            freq++;
            num/=10;
        }
    }
    printf("The Frequency of %d is....%d",digit,freq);
    return 0;
}
