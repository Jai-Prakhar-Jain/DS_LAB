#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int Info;
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
        printf("%d ", P->Info);
        P = P->Next;
    }
}
void InsBeg(struct Node **START, int X)
{
    struct Node *P;
    P = GetNode();
    P->Info = X;
    P->Next = *START;
    *START = P;
}
void InsEnd(struct Node **START, int X)
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
        P->Info = X;
        P->Next = NULL;
    }
    else
    {
        InsBeg(START, X);
    }
}
void InsAfter(struct Node **P, int X)
{
    struct Node *Q;
    struct Node *R;
    Q = GetNode();
    R = (*P)->Next;
    (*P)->Next = Q;
    Q->Next = R;
    Q->Info = X;
}
int DelBeg(struct Node **START)
{
    struct Node *P;
    int X;
    P = *START;
    *START = P->Next;
    X = P->Info;
    free(P);
    return X;
}
int DelEnd(struct Node **START)
{
    struct Node *P;
    struct Node *Q;
    int X;
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
    X = P->Info;
    free(P);
    Q->Next = NULL;
    return X;
}
int DelAfter(struct Node **P)
{
    int X;
    struct Node *Q;
    Q=(*P)->Next;
    (*P)->Next=Q->Next;
    X=Q->Info;
    free(Q);
    return X;
}
int DelNode(struct Node **START, int X)
{
    struct Node *P, *Q;
    int K;
    P = *START;
    Q = *START;
    while (P != NULL)
    {
        if (P->Info == X)
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
    K = P->Info;
    free(P);
    return K;
}
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
int Task(struct Node **START)
{
    int N, I, K, L;
    struct Node *P, *Q;
    printf("To Insert At Beginning Press -> 1 \nTo Insert After A Value Press -> 2 \nTo Insert At End Press -> 3 \nTo Delete From Beginning Press -> 4\nTo Delete After A Node Press -> 5\nTo Delete Form End Press -> 6\nTo Delete A Node Press -> 7\nTo Traverse Press -> 8\nTo Reverse Press -> 9\nEnter Your Choice : ");
    scanf("%d", &N);
    if (N == 1)
    {
        printf("How Many Elements You Want To Insert : ");
        scanf("%d", &K);
        for (I = 0; I < K; I++)
        {
            printf("Enter Element %d : ", I + 1);
            scanf("%d", &L);
            InsBeg(START, L);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 2)
    {
        printf("After Which Number You Want To Insert : ");
        scanf("%d", &K);
        printf("Enter The Number To Be Inserted : ");
        scanf("%d", &I);
        P = *START;
        while (P->Info != K)
        {
            P = P->Next;
        }
        InsAfter(&P, I);
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 3)
    {
        printf("How Many Elements You Want To Insert : ");
        scanf("%d", &K);
        for (I = 0; I < K; I++)
        {
            printf("Enter Element %d : ", I + 1);
            scanf("%d", &L);
            InsEnd(START, L);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 4)
    {
        printf("How Many Elements You Want To Delete : ");
        scanf("%d", &K);
        for (I = 0; I < K; I++)
        {
            DelBeg(START);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if(N==5)
    {
        printf("After Which Number You Want To Delete : ");
        scanf("%d", &K);
        P = *START;
        while (P->Info != K)
        {
            P = P->Next;
        }
        DelAfter(&P);
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 6)
    {
        printf("How Many Elements You Want To Delete : ");
        scanf("%d", &K);
        for (I = 0; I < K; I++)
        {
            DelEnd(START);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 7)
    {
        printf("Enter The Element You Want To Delete : ");
        scanf("%d", &K);
        DelNode(START, K);
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 8)
    {
        Traverse(*START);
        printf("\nDo You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    if (N == 9)
    {
        Reverse(&(*START));
        printf("\nDo You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(START);
        else
            return 0;
    }
    return 0;
}
int main()
{
    struct Node *START;
    START = NULL;
    Task(&START);
    return 0;
}