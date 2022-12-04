#include<stdio.h>
void ArrayInsert(int A[],int *N,int K,int I)
{
    int J;
    for(J=*N-1;J>=I;J--)
    {
        A[J+1]=A[J];
    }
    A[I]=K;
    *N=*N+1;
}
void ArrayDelete(int A[],int *N)
{
    int J=0;
    for(J=1;J<=*(N)-1;J++)
    {
        A[J-1]=A[J];
    }
    *N=*(N)-1;
}
int PQDelete(int A[],int *N)
{
    int X=A[0];
    ArrayDelete(A,N);
    return X;
}
void PQInsert(int A[],int *N,int K)
{
    int I=0;
    while(I<*N && K>=A[I])
    {
        I++;
    }
    ArrayInsert(A,N,K,I);
}
int main()
{
    int A[100],N=0,I=0,K,T;
    printf("How Many Elements You Want To Enter In Priority Queue : ");
    scanf("%d",&T);
    for(I=0;I<T;I++)
    {
        printf("Enter Element %d :",I+1);
        scanf("%d",&K);
        PQInsert(A,&N,K);
    }
    for(I=0;I<T;I++)
    {
        printf("%d ",PQDelete(A,&N));
    }
    return 0;
}