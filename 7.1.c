#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[10];
    int i,n;
    printf("Enter the string");
    scanf("%s",&a);
    printf("Enter the number of letters to be displayed");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
