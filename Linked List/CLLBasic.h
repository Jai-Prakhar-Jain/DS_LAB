#include<stdio.h>
#include<stdlib.h>
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
void Traverse(struct Node *CSTART)
{
    struct Node *P;
    P=CSTART->Next;
    while (P!=CSTART)
    {
        printf("%d ",P->Info);
        P=P->Next;
    }
    printf("%d",P->Info);
}
void InsBeg(struct Node **CSTART,int X)
{
    struct Node *P;
    P=GetNode();
    P->Info=X;
    if((*CSTART)==NULL)
    {
        P->Next=P;
        *CSTART=P;
    }
    else
    {
        P->Next=(*CSTART)->Next;
        (*CSTART)->Next=P;    
    }
}
void InsEnd(struct Node **CSTART,int X)
{
    struct Node *P;
    P=GetNode();
    P->Info=X;
    if(*CSTART==NULL)
    {
        InsBeg(&(*CSTART),X);
    }
    else
    {
        P->Next=(*CSTART)->Next;
        (*CSTART)->Next=P;
        (*CSTART)=P;
    }
}
void InsAfter(struct Node **CSTART,struct Node **Q,int X)
{
    struct Node *P;
    P=GetNode();
    P->Info=X;
    if(*Q==*CSTART)
    {
        InsEnd(&(*CSTART),X);
    }
    else
    {
        P->Next=(*Q)->Next;
        (*Q)->Next=P;
    }
}
int DelBeg(struct Node **CSTART)
{
    struct Node *P;
    int X;
    P=(*CSTART)->Next;
    (*CSTART)->Next=P->Next;
    X=P->Info;
    free(P);
    return X;
}
int DelEnd(struct Node **CSTART)
{
    struct Node *P;
    int X;
    P=(*CSTART)->Next;
    while (P->Next!=(*CSTART))
    {
        P=P->Next;
    }
    X=(*CSTART)->Info;
    P->Next=(*CSTART)->Next;
    free(*CSTART);
    *CSTART=P;
    return X;
}
int DelAfter(struct Node **Q)
{
    struct Node *P;
    int X;
    P=(*Q)->Next;
    (*Q)->Next=(*Q)->Next->Next;
    X=P->Info;
    free(P);
    return X;
}
int DelNode(struct Node **CSTART,int X)
{
    struct Node *P,*Q;
    Q=NULL;
    P=(*CSTART)->Next;
    while(P->Info!=X)
    {
        Q=P;
        P=P->Next;
    }
    if(P==(*CSTART)->Next)
    {
        return DelBeg(&(*CSTART));
    }
    if(P==(*CSTART))
    {
        return DelEnd(&(*CSTART));
    }
    else
    {
        return DelAfter(&Q);
    }
}
void Reverse(struct Node **CSTART)
{
    struct Node *P,*C,*N,*R;
    P=NULL;
    C=(*CSTART)->Next;
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
    *CSTART=P;
}
int Task(struct Node **CSTART)
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
            InsBeg(CSTART, L);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if (N == 2)
    {
        printf("After Which Number You Want To Insert : ");
        scanf("%d", &K);
        printf("Enter The Number To Be Inserted : ");
        scanf("%d", &I);
        P = *CSTART;
        while (P->Info != K)
        {
            P = P->Next;
        }
        InsAfter(CSTART,&P, I);
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
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
            InsEnd(CSTART, L);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if (N == 4)
    {
        printf("How Many Elements You Want To Delete : ");
        scanf("%d", &K);
        for (I = 0; I < K; I++)
        {
            DelBeg(CSTART);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if(N==5)
    {
        printf("After Which Number You Want To Delete : ");
        scanf("%d", &K);
        P = *CSTART;
        while (P->Info != K)
        {
            P = P->Next;
        }
        DelAfter(&P);
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if (N == 6)
    {
        printf("How Many Elements You Want To Delete : ");
        scanf("%d", &K);
        for (I = 0; I < K; I++)
        {
            DelEnd(CSTART);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if (N == 7)
    {
        printf("Enter The Element You Want To Delete : ");
        scanf("%d", &K);
        DelNode(CSTART, K);
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if (N == 8)
    {
        Traverse(*CSTART);
        printf("\nDo You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    if (N == 9)
    {
        Reverse(&(*CSTART));
        printf("\nDo You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
            return Task(CSTART);
        else
            return 0;
    }
    return 0;
}

