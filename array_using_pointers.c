#include <stdio.h>

int main()
{
    int var[3][3];
    int sum=0;
    int *i,*p=&var[0][0];
    printf("Input elements in the matrix : \n");
    for(i=p;i<=(p+8);i++)
    {
        scanf("%d",i); 
    }
    printf("The matrix is : ");
    for(i=p;i<=(p+8);i++)
    {
       printf("%d ",*i); 
    }
    for(i=p;i<=(p+8);i+=4)
    {
        sum=sum+*i;
    }
    printf("\nThe Sum of diagonal elements in the matrix is : %d",sum);

    return 0;
}
