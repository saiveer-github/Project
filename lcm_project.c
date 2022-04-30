#include <stdio.h>

int lcm(int a,int b);
int main()
{
    int num1,num2,result;
    printf("Input first number:");
    scanf("%d",&num1);
    printf("Input second number:");
    scanf("%d",&num2);
    result=lcm(num1,num2);
    printf("LCM of %d and %d = %d",num1,num2,result);
}
int lcm(int a,int b)
{ 
    static int factor = 1;
 
    if (factor % a == 0 && factor % b == 0)
    {
        return factor;
    }
    else
    {
        factor++;
        lcm(a, b);
    }
}
