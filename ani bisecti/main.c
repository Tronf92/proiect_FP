#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,d;
    char c[200]="Nici un an bisect!";
    d=0;
    printf("Introduceti intervalul de ani in care vreti sa aflati anii bisecti:\n");
    scanf("%d  %d",&a,&b);
    if(a>b){
        a=b;
        b=a;
    }
    while(a<=b){
        if((a%4 == 0) || (a%100==0 && a%400 ==0) ){
            printf("%d este an bisect!\n",a);
            d=1;
        }

        a++;
    }
    if(d!=1){
    printf("%s",c);}

    return 0;
}
