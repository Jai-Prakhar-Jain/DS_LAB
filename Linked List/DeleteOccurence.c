#include"LLBasic.H"
void DeleteOccurence(struct Node **START,int K)
{
    struct Node *P,*Q;
    P=*START;
    Q=NULL;
    while(P!=NULL)
    {
        if(P->Info==K)
        {
            P=P->Next;
            if(Q==NULL)
            {
                DelBeg(&(*START));
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
    }
}
int main()
{
    struct Node *START;
    START=NULL;
    int N,I,K;
    printf("How Many Numbers You Want To Enter : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&START,K);
    }
    printf("Enter The Key To Be Deleted : ");
    scanf("%d",&K);
    DeleteOccurence(&START,K);
    Traverse(START);
    return 0;
}