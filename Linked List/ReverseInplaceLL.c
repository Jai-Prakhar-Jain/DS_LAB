#include"LLBasic.H"
void Reverse(struct Node **START)
{
    struct Node *P,*C,*N;
    P=NULL;
    C=*START;
    N=C->Next;
    while(C!=NULL)
    {
        C->Next=P;
        P=C;
        C=N;
        if(N!=NULL)
        {
            N=N->Next;
        }
    }
    *START=P;
}
int main()
{
    struct Node *START;
    START=NULL;
    int N,I,K;
    printf("How Many Elements You Want To Enter : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&START,K);
    }
    Reverse(&START);
    Traverse(START);
}