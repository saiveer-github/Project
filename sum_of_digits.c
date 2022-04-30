#include <stdio.h>

int sum(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("Input Number: %d\nSum of Digits:%d",num,sum(num));

    return 0;
}
int sum(int num)
{
    if (num == 0)
       return 0;
    return (num% 10 + sum(num/ 10));
}
