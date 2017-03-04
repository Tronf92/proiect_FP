#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,x,x1,x2,d;
   printf("Introduceti a:\n a= ");
   scanf("%d",&a);
   printf("Introduceti b:\n b= ");
   scanf("%d",&b);
   printf("Introduceti c:\n c= ");
   scanf("%d",&c);

   if(a!=0)
   {
       d=b*b-4*a*c;
       if(d>0)
            {
                x1=(-b+sqrt(d))/2*a;
                x2=(-b-sqrt(d))/2*a;
                printf("Solutiile sunt: x1= %d, x2= %d",x1,x2);
            }
   if(d<0 && a!=0)
   {
       printf("Avem doua radacini complexe");
   }
   if(d==0)
   {
       x=-b/a;
       printf("Avem ecuatie de gradul 1:\n");
       printf("Solutia este x=%d",x);
   }
   }
    return 0;


}
