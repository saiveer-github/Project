#include <stdio.h>

int prime(int num,int i);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(prime(num,num/2)==1)
    {
        printf("%d is a Prime Number",num);
    }
    else
    {
        printf("%d is not a Prime Number",num);
    }

    return 0;
}
int prime(int num,int i)
{
    if (i == 1)
       return 1;
    else{
        if(num%i==0)
        {
            return 0;
        }
        else
        {
            return prime(num,(i-1));
        }
    }
}
