#include<stdio.h>
int main()
{
    int A[100][100],T,B,L,R,C=0,N,M,TN,I,J;
    printf("Enter The Number Of Rows : ");
    scanf("%d",&N);
    printf("Enter The Number Of Columns : ");
    scanf("%d",&M);
    for(I=0;I<N;I++)
    {
        for(J=0;J<M;J++)
        {
            printf("Enter The Value Of A[%d][%d] : ", I, J);
            scanf("%d", &A[I][J]);
        }
    }
    T=0;B=N-1;L=0;R=M-1;TN=N*M;
    while (C<TN)
    {
        for(I=T,J=L;J<=R && C<TN;J++)
        {
            printf("%d ",A[I][J]);
            C++;
        }
        T++;
        for (I=T,J=R;I<=B && C<TN;I++)
        {
            printf("%d ",A[I][J]);
            C++;
        }
        R--;
        for(I=B,J=R;J>=L && C<TN;J--)
        {
            printf("%d ",A[I][J]);
            C++;
        }
        B--;
        for(I=B,J=L;I>=T && C<TN;I--)
        {
            printf("%d ",A[I][J]);
            C++;
        }
        L++;
    }
    
}