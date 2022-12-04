#include"CLLBasic.h"
void OtherNodeSum(struct Node **CS1)
{
    struct Node *P,*Q,*CS2;
    CS2=NULL;
    int S=0;
    P=(*CS1)->Next;
    Q=P->Next;
    do
    {
        S=0;
        while (Q!=P)
        {
            S=S+Q->Info;
            Q=Q->Next;
        }  
        InsEnd(&CS2,S);
        P=P->Next;
        Q=P->Next;
    } while (P!=(*CS1)->Next);
    Traverse(CS2);
}
int main()
{
    struct Node *CS1;
    int I,N,K;
    CS1=NULL;
    printf("How Many Elements You Want To Insert In Circular Linked List : ");
    scanf("%d",&N);
    for (I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&CS1,K);
    }
    OtherNodeSum(&CS1);
    return 0;
}