#include <stdio.h>
#include <stdlib.h>

int A[100][100],i,j,liniiA,coloaneA;
int B[100][100];
int C[100][100];

void CreareMatrici()
{
    printf("Introduceti nr de linii pt A:");
    scanf("%d",&liniiA);
    printf("Introduceti nr de coloane pt A:");
    scanf("%d",&coloaneA);
    printf("Matricea A:\n");
    for(i=0;i<liniiA;i++)
    {
        for(j=0;j<coloaneA;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }

    }

    printf("Matricea B:\n");
    for(i=0;i<liniiA;i++)
    {
        for(j=0;j<coloaneA;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }

    }
}

void TiparireMatriceA()
{
    for(i=0;i<liniiA;i++)
    {
        for(j=0;j<coloaneA;j++)
        {
            printf("%d ",  A[i][j]);
        }
        printf("\n");
    }

}



void TiparireMatriceB()
{
    for(i=0;i<liniiA;i++)
    {
        for(j=0;j<coloaneA;j++)
        {
            printf("%d ",  B[i][j]);
        }
        printf("\n");
    }

}

void AdunareMatrici()
{
    for(i=0;i<liniiA;i++){
        for(j=0;j<coloaneA;j++){
                C[i][j]=A[i][j]+B[i][j];
                printf("%d ",C[i][j]);
                }
            printf("\n");
            }


}

void ScadereMatrici()
{
    for(i=0;i<liniiA;i++){
        for(j=0;j<coloaneA;j++){
            C[i][j]=A[i][j]-B[i][j];
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
}

void Inmultire()
{
    for(i=0;i<liniiA;i++){
        for(j=0;j<coloaneA;j++){
            C[i][j]=A[i][j]*B[i][j];
            printf("%d ",C[i][j]);

        }
        printf("\n");
    }
}

void Impartire()
{

    for(i=0;i<liniiA;i++){
        for(j=0;j<coloaneA;j++){
                float C[i][j];
               C[i][j]=(float)A[i][j]/(float)B[i][j];
            printf("%f ",C[i][j]);

        }
        printf("\n");
    }
}

int main()
{

    CreareMatrici();
    TiparireMatriceA();
    printf("\n");
    TiparireMatriceB();
    printf("\n");
    printf("A+B:\n");
    AdunareMatrici();
    printf("\n");
    printf("A-B:\n");
    ScadereMatrici();
    printf("\n");
    printf("A*B:\n");
    Inmultire();
    printf("\n");
    printf("A/B:\n");
    Impartire();




    return 0;
}
