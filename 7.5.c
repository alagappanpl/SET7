#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if((n%7)==0)
    {
        printf("The given number is a multiple of 7");
    }
    else
    {
        printf("The given number is not a multiple of 7");
    }
    return 0;
}
