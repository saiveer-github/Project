#include <stdio.h> //Here we declared the standard input output header file i.e preprocessor

int main()
{
    int a,b;  //Declared two variables that are needed to be swapped
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);  //scanning the values of the two variables from the user
    a=a+b;
    b=a-b;     //performing some mathematical operations required for swapping
    a=a-b;
    printf("After swapping the value of a is %d and the value of b is %d",a,b);

    return 0;
}
