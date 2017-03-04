#include <stdio.h>
#include <conio.h>
#define MAX 32767 //0x7fff
void main(void){
    int curent,ind/*preia val returnata de scanf*/,contor,contor_poz,min;
    float med_aritm; long suma; //pentru a nu apare depas    ire
    contor=contor_poz=suma=0;min=MAX;
    putchar(':');ind=scanf("%d",&curent);
    for(ind=0;ind!=EOF;suma+=curent,contor++){
        printf("suma este %d",suma);
        if(curent>0)contor_poz++;
        if(curent<min)min=curent;
        putchar(':');ind=scanf("%d",&curent);
        printf("suma este %d",suma);
        //3
        }
    if(contor){
       printf("%d",suma); med_aritm=suma/contor;
        printf("S-au citit %d intregi, dintre care %d pozitive, cu media \aritm %f, minimul %d\n",contor, contor_poz, med_aritm,min);
        }
    else puts("Nici o valoare prelucrata"); getch();


    return 0;

}
