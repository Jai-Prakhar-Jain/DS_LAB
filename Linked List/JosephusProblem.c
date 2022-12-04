#include"CLLBasic.h"
struct Node *JosephusProblem(struct Node *CS1,int X)
{
    int C=1;
    struct Node *P,*Q;
    P=(CS1)->Next;
    Q=NULL;
    while(P->Next!=P)
    {
        while(C!=X)
        {
            C=C+1;
            Q=P;
            P=P->Next;
        }
        P=P->Next;
        DelAfter(&Q);
        C=1;
    }
    return P;
}
int main()
{
    struct Node *CS1,*P;
    CS1=NULL;
    int I,N,K;
    printf("How Many Elements You Want To Add In Circular Linked List : ");
    scanf("%d",&N);
    for (I=1;I<=N;I++)
    {
        // printf("Enter Element %d : ",I);
        // scanf("%d",&K);
        InsEnd(&CS1,I);
    }
    printf("After How Many Nodes You Want To Delete : ");
    scanf("%d",&K);
    P=JosephusProblem(CS1,K);
    printf("%d",P->Info);
    return 0;
}