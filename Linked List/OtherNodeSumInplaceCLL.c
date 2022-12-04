#include"CLLBasic.h"
void OtherNodeSum(struct Node **CS1)
{
    struct Node *P;
    P=(*CS1);
    int S=0;
    do
    {
        S=S+P->Info;
        P=P->Next;
    } while (P!=(*CS1));
    P=(*CS1)->Next;
    do
    {
        P->Info=S-P->Info;
        P=P->Next;
    } while (P!=(*CS1)->Next);    
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
    Traverse(CS1);
    return 0;
}