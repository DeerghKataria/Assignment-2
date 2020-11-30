/*Program to Print Multiplication of a Number
Creator-Deergh Kataria*/
#include <stdio.h>

int main()
{
    int num,table,i;
    printf("Enter The Number....");
    scanf("%d",&num);
    //Printing table upto 10
    for(i=1;i<=10;i++)
    {   
        table=num*i;
        printf("%d X %d = %d\n",num,i,table);
    }
    return 0;
}
