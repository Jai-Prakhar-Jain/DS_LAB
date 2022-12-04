#include"LLBasic.H"
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
void MergeLL(struct Node *START1,struct Node *START2,struct Node **START3)
{
    struct Node *P,*Q;
    P=START1;
    Q=START2;
    while (P!=NULL && Q!=NULL)
    {
        if(P->Info<Q->Info)
        {
            InsEnd(&(*START3),P->Info);
            P=P->Next;
        }
        else
        {
            InsEnd(&(*START3),Q->Info);
            Q=Q->Next;
        }
    }
    while(P!=NULL)
    {
        InsEnd(&(*START3),P->Info);
        P=P->Next;
    }
    while(Q!=NULL)
    {
        InsEnd(&(*START3),Q->Info);
        Q=Q->Next;
    }
}
void UnionLL(struct Node *START1,struct Node *START2,struct Node **START3)
{
    struct Node *P,*Q;
    P=START1;
    Q=START2;
    while (P!=NULL && Q!=NULL)
    {
        if(P->Info<Q->Info)
        {
            InsEnd(&(*START3),P->Info);
            P=P->Next;
        }
        else
        {
            if(P->Info==Q->Info)
            {
                InsEnd(&(*START3),P->Info);
                P=P->Next;
                Q=Q->Next;
            }
            else
            {
                InsEnd(&(*START3),Q->Info);
                Q=Q->Next;
            }
        }
    }
    while(P!=NULL)
    {
        InsEnd(&(*START3),P->Info);
        P=P->Next;
    }
    while(Q!=NULL)
    {
        InsEnd(&(*START3),Q->Info);
        Q=Q->Next;
    }
}
void IntersectionLL(struct Node *START1,struct Node *START2,struct Node **START3)
{
    struct Node *P,*Q;
    P=START1;
    Q=START2;
    while (P!=NULL && Q!=NULL)
    {
        if(P->Info<Q->Info)
        {
            P=P->Next;
        }
        else
        {
            if(P->Info==Q->Info)
            {
                InsEnd(&(*START3),P->Info);
                P=P->Next;
                Q=Q->Next;
            }
            else
            {
                Q=Q->Next;
            }
        }
    }
}
void Difference1LL(struct Node *START1,struct Node *START2,struct Node **START3)
{
    struct Node *P,*Q;
    P=START1;
    Q=START2;
    while (P!=NULL && Q!=NULL)
    {
        if(P->Info<Q->Info)
        {
            InsEnd(&(*START3),P->Info);
            P=P->Next;
        }
        else
        {
            if(P->Info==Q->Info)
            {
                P=P->Next;
                Q=Q->Next;
            }
            else
            {
                Q=Q->Next;
            }
        }
    }
    while(P!=NULL)
    {
        InsEnd(&(*START3),P->Info);
        P=P->Next;
    }
}
void Difference2LL(struct Node *START1,struct Node *START2,struct Node **START3)
{
    struct Node *P,*Q;
    P=START1;
    Q=START2;
    while (P!=NULL && Q!=NULL)
    {
        if(P->Info>Q->Info)
        {
            InsEnd(&(*START3),Q->Info);
            Q=Q->Next;
        }
        else
        {
            if(P->Info==Q->Info)
            {
                P=P->Next;
                Q=Q->Next;
            }
            else
            {
                P=P->Next;
            }
        }
    }
    while(Q!=NULL)
    {
        InsEnd(&(*START3),Q->Info);
        Q=Q->Next;
    }
}

void SymmetricDifferenceLL(struct Node *START1,struct Node *START2,struct Node **START3)
{
    struct Node *P,*Q;
    P=START1;
    Q=START2;
    while (P!=NULL && Q!=NULL)
    {
        if(P->Info<Q->Info)
        {
            InsEnd(&(*START3),P->Info);
            P=P->Next;
        }
        else
        {
            if(P->Info==Q->Info)
            {
                P=P->Next;
                Q=Q->Next;
            }
            else
            {
                InsEnd(&(*START3),Q->Info);
                Q=Q->Next;
            }
        }
    }
    while(P!=NULL)
    {
        InsEnd(&(*START3),P->Info);
        P=P->Next;
    }
    while(Q!=NULL)
    {
        InsEnd(&(*START3),Q->Info);
        Q=Q->Next;
    }
}

int main()
{
    struct Node *START1,*START2,*START3,*START4,*START5,*START6,*START7,*START8;
    int N,I,X;
    START1=NULL;
    START2=NULL;
    START3=NULL;
    START4=NULL;
    START5=NULL;
    START6=NULL;
    START7=NULL;
    START8=NULL;
    printf("How Many Elements You Want To Insert In First Linked List : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&X);
        AscendingInsertion(&START1,X);
    }
    printf("How Many Elements You Want To Insert In Second Linked List : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&X);
        AscendingInsertion(&START2,X);
    }
    printf("Set Merge---> ");
    MergeLL(START1,START2,&START3);
    Traverse(START3);
    printf("\nSet Union---> ");
    UnionLL(START1,START2,&START4);
    Traverse(START4);
    printf("\nSet Intersection---> ");
    IntersectionLL(START1,START2,&START5);
    Traverse(START5);
    printf("\nSet Difference 1---> ");
    Difference1LL(START1,START2,&START6);
    Traverse(START6);
    printf("\nSet Difference 2---> ");
    Difference2LL(START1,START2,&START7);
    Traverse(START7);
    printf("\nSet Symmetric Difference ---> ");
    SymmetricDifferenceLL(START1,START2,&START8);
    Traverse(START8);
}