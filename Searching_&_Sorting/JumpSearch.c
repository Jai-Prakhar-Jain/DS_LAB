#include<stdio.h>
#include<math.h>
/********************************************************************************************************/

int JumpSearch(int A[],int N,int X);
int LinearSearch(int A[],int X,int S,int E);

/********************************************************************************************************/

int main()
{
    int A[20],N,X,I,T=0;
    printf("Enter The Size Of Array : ");
    scanf("%d",&N);
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] : ",I);
        scanf("%d",&A[I]);
    }
    printf("Enter The Number To Be Searched : ");
    scanf("%d",&X);
    T=JumpSearch(A,N,X);
    printf("%d",T);

}

/********************************************************************************************************/

int JumpSearch(int A[],int N,int X)
{
    int M=pow(N,0.5),I,S,E;
    for(I=0;I<N;I=I+M)
    {
        if(X==A[I])
        return I;
        else
        {
            if(X<A[I])
            {
                S=I-M;
                E=I;
                return LinearSearch(A,X,S,E);
            }
        }
    }
}

/********************************************************************************************************/

int LinearSearch(int A[],int X,int S,int E)
{
    int I;
    for(I=S;I<E;I++)
    {
        if(X==A[I])
        {
            return I;
        }
    }
}

