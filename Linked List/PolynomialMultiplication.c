#include"PLLBasic.h"
void PolynomialMultiplication(struct Node *S1,struct Node *S2,struct Node **S3)
{
    struct Node *P,*Q;
    P=S1;
    Q=S2;
    while(Q!=NULL)
    {
        while(P!=NULL)
        {
            DescendingInsertion(&(*S3),P->Coef*Q->Coef,P->Exp+Q->Exp);
            P=P->Next;
        }
        P=S1;
        Q=Q->Next;
    }
    P=*S3;
    while(P->Next!=NULL)
    {
        if(P->Exp==P->Next->Exp)
        {
            P->Coef=P->Coef+P->Next->Coef;
            DelAfter(&P);
        }
        else
        {
            P=P->Next;
        }
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
    PolynomialMultiplication(S1,S2,&S3);
    Traverse(S3);
    return 0;
}