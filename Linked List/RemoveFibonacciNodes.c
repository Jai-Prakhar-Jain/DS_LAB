#include"CLLBasic.h"
int LargestElement(struct Node **CS1)
{
    struct Node *P;
    P=(*CS1)->Next;
    int M=P->Info;
    do
    {
        P=P->Next;
        if(P->Info>M)
        {
            M=P->Info;
        }
    } while (P!=(*CS1)->Next);
    return M;
}
void RemoveFibonacciNodes(struct Node **CS1)
{
    struct Node *P,*Q;
    Q=NULL;
    P=(*CS1)->Next;
    int M,I,X;
    M=LargestElement(&(*CS1));
    int A[M+1],B[M+1];
    for(I=0;I<=M;I++)
    {
        A[I]=0;
        B[I]=0;
    }
    A[1]=1;
    for(I=2;I<=M;I++)
    {
        A[I]=A[I-1]+A[I-2];
    }
    for(I=0;I<=M;I++)
    {
        if(A[I]<=M)
        {
            B[A[I]]=1;
        }
    }
    do
    {
        if(B[P->Info]==1)
        {
            P=P->Next;
            if(Q==NULL)
            {
                DelBeg(&(*CS1));
            }
            else
            {
                DelAfter(&Q);
            }
        }
        else
        {
            Q=P;
            P=P->Next;
        }
    } while (P!=(*CS1)->Next);  
    Traverse(*CS1); 
}
int main()
{
    struct Node *CS1;
    CS1=NULL;
    int I,N,K;
    printf("How Many Elements You Want To Add In Circular Linked List : ");
    scanf("%d",&N);
    for (I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&CS1,K);
    }
    RemoveFibonacciNodes(&CS1);
    return 0;
}