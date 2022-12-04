#include<stdio.h>
int LinearSearch(int A[],int N,int X);

/********************************************************************************************/

int main()
{
    int A[20]={0},N,X;
    printf("Enter The Size Of Array ");
    scanf("%d",&N);
    printf("Enter The Number To Be Searched ");
    scanf("%d",&X);
    LinearSearch(A,N,X);
}

/********************************************************************************************/

int LinearSearch(int A[],int N,int X)
{
    int I;
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] ",I);
        scanf("%d",&A[I]);
    }
    for(I=0;I<N;I++)
    {
        if(X==A[I])
        {
            printf("%d",I);
            break;
        }
    }
}
