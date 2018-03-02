#include<stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*2;
    
    if(sum>n)
    {
        printf("%d",sum);
        break;
    }
    }
    return 0;
}
