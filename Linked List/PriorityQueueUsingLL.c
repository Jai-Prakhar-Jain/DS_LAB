#include"LLBasic.H"
void AscendingInsertion(struct Node **START, int X);
int PQDequeue(struct Node **START);
int main()
{
    struct Node *START;
    int N,I,K;
    START = NULL;
    printf("How Many Elements You Want To Insert : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        AscendingInsertion(&START,K);
    }
    for(I=1;I<=N;I++)
    {
        printf("%d ",PQDequeue(&START));
    }
    return 0;
}
void AscendingInsertion(struct Node **START, int X)
{
    struct Node *P,*Q;
    Q=NULL;
    P=*START;
    while(P!=NULL && X>=P->Info)
    {
        Q=P;
        P=P->Next;
    }
    if(Q==NULL)
    {
        InsBeg(&(*START),X);
    }
    else
    {
        InsAfter(&Q,X);
    }
}
int PQDequeue(struct Node **START)
{
    DelBeg(&(*START));
}