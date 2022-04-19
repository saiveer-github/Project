#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks"); //Asking for the user to enter marks
    scanf("%d",&marks);  //scanning the value entered by the user
    if(marks>100)  //checking the grade scored by the kid comparing with marks
    {
        printf("Enter valid marks");
    }
    else if(marks>=85)
    {
        printf("Grade A");
    }
     else if(marks>=70)
    {
        printf("Grade B");
    }
     else if(marks>=55)
    {
        printf("Grade C");
    }
     else if(marks>=40)
    {
        printf("Grade D");
    }
     else if(marks<40)
    {
        printf("Grade F");
    }

    return 0;
}
