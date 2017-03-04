#include <stdio.h>
#include <stdlib.h>


int main()
{
    char sir[100], *psir;
    int i=0,n,t;

    printf("Introdu sirul doar cu minuscule:\n");
    gets(sir);
    psir=sir;
    while(psir[i]){
        t=psir[i];
        putchar(toupper(t));
        i++;
    }
    return 0;
}
