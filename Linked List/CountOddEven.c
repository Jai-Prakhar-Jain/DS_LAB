#include<stdio.h>
#include<stdlib.h>
void CountEvenOddNode();
struct Node
{
    int Info;
    struct Node *Next;
};
struct Node *START;
struct Node *GetNode()
{
    struct Node *P;
    P=(struct Node *)malloc(sizeof(struct Node));
    return P;
}
void Traverse()
{
    struct Node *P;
    P=START;
    while(P!=NULL)
    {
        printf("%d ",P->Info);
        P=P->Next;
    }
}
void InsBeg(int X)
{
    struct Node *P;
    P=GetNode();
    P->Info=X;
    P->Next=START;
    START=P;
}
void InsEnd(int X)
{
    struct Node *P;
    struct Node *Q;
    P=GetNode();
    Q=START;
    while(Q->Next!=NULL)
    {
        Q=Q->Next;
    }
    Q->Next=P;
    P->Info=X;
    P->Next=NULL;
}
int Task()
{
    int N,I,K,L;
    printf("To Insert In Beginning Press 1 To Insert In End Press 2 To Traverse Press 3 : ");
    scanf("%d",&N);
    if(N==1)
    {
        printf("How Many Elements You Want To Insert : ");
        scanf("%d",&K);
        for(I=0;I<K;I++)
        {
            printf("Enter Element %d : ",I+1);
            scanf("%d",&L);
            InsBeg(L);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d",&K);
        if(K==1)
        return Task();
        else
        return 0;
    }
    if(N==2)
    {
        printf("How Many Elements You Want To Insert : ");
        scanf("%d",&K);
        for(I=0;I<K;I++)
        {
            printf("Enter Element %d : ",I+1);
            scanf("%d",&L);
            InsEnd(L);
        }
        printf("Do You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d",&K);
        if(K==1)
        return Task();
        else
        return 0;
    }
    if(N==3)
    {
        Traverse();
        printf("\nDo You Want To Repeat Any Task If Yes Press 1 Else Press Any Key : ");
        scanf("%d",&K);
        if(K==1)
        return Task();
        else
        return 0;
    }
}
int main()
{
    START=NULL;
    Task();
    CountEvenOddNode();
    return 0;
}
void CountEvenOddNode()
{
    struct Node *P;
    int CE=0,CO=0;
    P=START;
    while(P!=NULL)
    {
        if(P->Info%2==0)
        {
            CE++;
        }
        else
        {
            CO++;
        }
        P=P->Next;
    }
    printf("Number Of Nodes Containing Even Values Are ---> %d",CE);
    printf("\n");
    printf("Number Of Nodes Containing Odd Values Are ---> %d",CO);
}