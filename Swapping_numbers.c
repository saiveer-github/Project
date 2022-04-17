#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of a is %d and the value of b is %d",a,b);

    return 0;
}
