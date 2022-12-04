#include"MyStackInt.h"
#include"LLBasic.H"
void ReverseOutplace(struct Node **START)
{
    struct Node *P;
    P=*START;
    while(P!=NULL)
    {
        Push(P->Info);
        P=P->Next;
    }
    P=*START;
    while(P!=NULL)
    {
        P->Info=Pop();
        P=P->Next;
    }
}
int main()
{
    Initialize();
    struct Node *START;
    START=NULL;
    int N,I,K;
    printf("How Many Elements You Want To Insert : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&START,K);
    }
    printf("Linked List Before Reversal ---> ");
    Traverse(START);
    ReverseOutplace(&START);
    printf("\nLinked List After Reversal ---> ");
    Traverse(START);
    return 0;
}