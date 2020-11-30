/*Code for Finding Sum of All Odd Numbers Between 1 to n
Creator-Deergh Kataria*/
#include <stdio.h>

int main()
{
    int i,sum=0,n;
    printf("Enter The Value of Number....");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    printf("Sum of All Odd Numbers Between 1 to %d is....%d",n,sum);
    return 0;
}

