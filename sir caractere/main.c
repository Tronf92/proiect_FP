#include <stdio.h>
#include <stdlib.h>



int main()
{
    char a[100];
    char *pa;
    int i;
    printf("Introduceti sirul:");
    gets(a);
    pa=a;
    for(i=0;i<100;i++){
            if(*pa=='\0'){i++; break;}
            pa++;

    }
    while(i){
        printf("%c",*pa--);
        i--;
    }




    return 0;
}
