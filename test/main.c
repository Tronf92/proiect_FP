#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b;
    float x;

    printf("Introduceti a=");
    scanf("%d",&a);
    printf("Introduceti b=");
    scanf("%d",&b);
    if(a==0 && b!=0){
        printf("Ecuatia nu are soluii!.");
    }
    if(a==0 && b==0){
        printf("Ecuatia are o infinitate de solutii");
    }
    if(a!=0 && b==0){
        printf("Solutia este x=0");
    }
    x=(float)-b/a;
    if(a!=0 && b!=0){
        printf("Solutia este %f",x);
    }
    return 0;
}
