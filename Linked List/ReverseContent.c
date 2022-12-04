#include"LLBasic.H"
void ReverseContent(struct Node **START)
{
    struct Node *P;
    P=*START;
    int K,S=0,R;
    while (P!=NULL)
    {
        K=P->Info;
        while(K!=0)
        {
            R=K%10;
            K=K/10;
            S=(S*10)+(R);
        }
        P->Info=S;
        S=0;
        P=P->Next;
    }   
}
int main()
{
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
    printf("Linked List Before Reversal Of Content ---> ");
    Traverse(START);
    ReverseContent(&START);
    printf("\nLinked List After Reversal Of Content ---> ");
    Traverse(START);
    return 0;
}