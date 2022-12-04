#include"PLLBasic.h"
void PolynomialAddition(struct Node *S1,struct Node *S2,struct Node **S3)
{
    struct Node *P,*Q;
    P=S1;
    Q=S2;
    while(P!=NULL && Q!=NULL)
    {
        if(P->Exp==Q->Exp)
        {
            InsEnd(&(*S3),P->Coef+Q->Coef,P->Exp);
            P=P->Next;
            Q=Q->Next;
        }
        else
        {
            if(P->Exp>Q->Exp)
            {
                InsEnd(&(*S3),P->Coef,P->Exp);
                P=P->Next;
            }
            else
            {
                InsEnd(&(*S3),Q->Coef,Q->Exp);
                Q=Q->Next;
            }
        }
    }
    while(P!=NULL)
    {
        InsEnd(&(*S3),P->Coef,P->Exp);
        P=P->Next;
    }
    while(Q!=NULL)
    {
        InsEnd(&(*S3),Q->Coef,Q->Exp);
        Q=Q->Next;
    }
}
int main()
{
    struct Node *S1,*S2,*S3;
    int I,N,C,E;
    S1=NULL;
    S2=NULL;
    S3=NULL;
    printf("How Many Terms You Want To Enter In First Polynomial : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Exponent Of Element %d : ",I);
        scanf("%d",&E);
        printf("Enter Coefficient Of Element %d : ",I);
        scanf("%d",&C);
        DescendingInsertion(&S1,C,E);
    }
    printf("How Many Terms You Want To Enter In Second Polynomial : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Exponent Of Element %d : ",I);
        scanf("%d",&E);
        printf("Enter Coefficient Of Element %d : ",I);
        scanf("%d",&C);
        DescendingInsertion(&S2,C,E);
    }
    PolynomialAddition(S1,S2,&S3);
    Traverse(S3);
    return 0;
}