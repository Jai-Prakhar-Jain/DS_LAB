#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int Coef;
    int Exp;
    struct Node *Next;
};
struct Node *GetNode()
{
    struct Node *P;
    P = (struct Node *)malloc(sizeof(struct Node));
    return P;
}
void Traverse(struct Node *START)
{
    struct Node *P;
    P = START;
    while (P != NULL)
    {
        printf("%dX^%d ", P->Coef,P->Exp);
        P = P->Next;
    }
}
void InsBeg(struct Node **START, int C,int E)
{
    struct Node *P;
    P = GetNode();
    P->Coef = C;
    P->Exp = E;
    P->Next = *START;
    *START = P;
}
void InsEnd(struct Node **START, int C,int E)
{
    struct Node *P;
    struct Node *Q;
    P = GetNode();
    if (*START != NULL)
    {
        Q = *START;
        while (Q->Next != NULL)
        {
            Q = Q->Next;
        }
        Q->Next = P;
        P->Coef = C;
        P->Exp = E;
        P->Next = NULL;
    }
    else
    {
        InsBeg(START, C,E);
    }
}
void InsAfter(struct Node **P, int C,int E)
{
    struct Node *Q;
    struct Node *R;
    Q = GetNode();
    R = (*P)->Next;
    (*P)->Next = Q;
    Q->Next = R;
    Q->Coef = C;
    Q->Exp = E;
}
int DelBeg(struct Node **START)
{
    struct Node *P;
    int E;
    P = *START;
    *START = P->Next;
    E = P->Exp;
    free(P);
    return E;
}
int DelEnd(struct Node **START)
{
    struct Node *P;
    struct Node *Q;
    int E;
    P = *START;
    Q = *START;
    while (P->Next != NULL)
    {
        P = P->Next;
    }
    while (Q->Next != P)
    {
        Q = Q->Next;
    }
    E = P->Exp;
    free(P);
    Q->Next = NULL;
    return E;
}
int DelNode(struct Node **START, int E)
{
    struct Node *P, *Q;
    int K;
    P = *START;
    Q = *START;
    while (P != NULL)
    {
        if (P->Exp == E)
        {
            break;
        }
        P = P->Next;
    }
    while (Q->Next != P)
    {
        Q = Q->Next;
    }
    Q->Next = P->Next;
    K = P->Exp;
    free(P);
    return K;
}
int DelAfter(struct Node **P)
{
    int E;
    struct Node *Q;
    Q=(*P)->Next;
    (*P)->Next=Q->Next;
    E=Q->Exp;
    free(Q);
    return E;
}
void AscendingInsertion(struct Node **START, int C,int E)
{
    struct Node *P, *Q;
    Q = NULL;
    P = *START;
    while (P != NULL && E >= P->Exp)
    {
        Q = P;
        P = P->Next;
    }
    if (Q == NULL)
    {
        InsBeg(&(*START), C,E);
    }
    else
    {
        InsAfter(&Q, C,E);
    }
}
void DescendingInsertion(struct Node **START, int C,int E)
{
    struct Node *P,*Q;
    Q=NULL;
    P=*START;
    while(P!=NULL && E<=P->Exp)
    {
        Q=P;
        P=P->Next;
    }
    if(Q==NULL)
    {
        InsBeg(&(*START),C,E);
    }
    else
    {
        InsAfter(&Q,C,E);
    }
}