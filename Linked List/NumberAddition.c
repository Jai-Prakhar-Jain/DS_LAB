#include"LLBasic.H"
void AddTwoNumber(struct Node **S1,struct Node **S2,struct Node **S3)
{
    int S=0,T=0,C=0;
    struct Node *P,*Q;
    Reverse(&(*S1));
    Reverse(&(*S2));
    P=*S1;
    Q=*S2;
    while(P!=NULL && Q!=NULL)
    {
        T=P->Info+Q->Info+C;
        S=T%10;
        C=T/10;
        P=P->Next;
        Q=Q->Next;
        InsBeg(&(*S3),S);
    }
    while(P!=NULL)
    {
        T=P->Info+C;
        S=T%10;
        C=T/10;
        P=P->Next;
        InsBeg(&(*S3),S);
    }
    while(Q!=NULL)
    {
        T=Q->Info+C;
        S=T%10;
        C=T/10;
        Q=Q->Next;
        InsBeg(&(*S3),S);
    }
    if(C!=0)
    {
        InsBeg(&(*S3),C);
    }
}
int main()
{
    struct Node *S1,*S2,*S3;
    S1=NULL;
    S2=NULL;
    S3=NULL;
    int N1,N2,K;
    printf("Enter First Number : ");
    scanf("%d",&N1);
    printf("Enter Second Number : ");
    scanf("%d",&N2);
    while (N1!=0)
    {
        K=N1%10;
        N1=N1/10;
        InsBeg(&S1,K);
    }
    while (N2!=0)
    {
        K=N2%10;
        N2=N2/10;
        InsBeg(&S2,K);
    }
    AddTwoNumber(&S1,&S2,&S3);
    Traverse(S3);
    return 0;
}