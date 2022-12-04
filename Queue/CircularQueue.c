#include<stdio.h>
#include<stdlib.h>
#define QUEUESIZE 50
#define TRUE 1
#define FALSE 0
struct Queue
{
    int Item[QUEUESIZE];
    int Front;
    int Rear;
};
void Initialize(struct Queue *Q)
{
    Q->Rear=QUEUESIZE-1;
    Q->Front=QUEUESIZE-1;
}
int IsEmpty(struct Queue *Q)
{
    if(Q->Rear==Q->Front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void Enqueue(struct Queue *Q,int X)
{
    if((Q->Rear+1)%QUEUESIZE==Q->Front)
    {
        printf("Queue Overflow");
        exit(1);
    }
    Q->Rear=(Q->Rear+1)%QUEUESIZE;
    Q->Item[Q->Rear]=X;
}
int Dequeue(struct Queue *Q)
{
    int X;
    if(Q->Front==Q->Rear)
    {
        printf("Queue Underflow");
        exit(1);
    }
    Q->Front=(Q->Front+1)%QUEUESIZE;
    X=Q->Item[Q->Front];
    return X;
}
void Task(struct Queue *Q)
{
    int N,I,K,C;
    printf("To EnQueue Press 1 & To DeQueue Press 2 : ");
    scanf("%d",&N);
    if(N==1)
    {
        printf("How Many Elements You Want To Add : ");
        scanf("%d",&N);
        for(I=1;I<=N;I++)
        {
            printf("Enter Elemet %d : ",I);
            scanf("%d",&K);
            Enqueue(Q,K);
        }
        printf("Do You Want To Repeat Any Task Press 1 Else Press Any Key : ");
        scanf("%d",&C);
        if(C==1)
        {
            return Task(Q);
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
        
    }
    if(N==2)
    {
        printf("How Many Elements You Want To Delete : ");
        scanf("%d",&N);
        for(I=1;I<=N;I++)
        {
            printf("%d ",Dequeue(Q));
        }
        printf("\nDo You Want To Repeat Any Task Press 1 Else Press Any Key : ");
        scanf("%d",&C);
        if(C==1)
        {
            return Task(Q);
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
        
    }
}
int main()
{
    struct Queue Q;
    Initialize(&Q);
    Task(&Q);
    return 0;
}