#include<stdio.h> 
int main() 
{ 
    int i, j,n;
    printf("Enter number of rows to be printed");
    scanf("%d",&n);
    for(i=1; i<=n; ++i) 
    { 
        for(j=0; j<i; ++j) 
        { 
            printf("01");
        } 
       printf("\n"); 
    } 
   return 0; 
}
