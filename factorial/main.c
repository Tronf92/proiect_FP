#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n,factorial=1;
    printf("Introduceti n:\n n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("%d factorial este %d",n,factorial);
    return 0;
}
