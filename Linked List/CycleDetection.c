#include"LLBasic.H"
#define TRUE 1
#define FALSE 0
int CycleDetection(struct Node **START)
{
    struct Node *T,*R;
    T=*START;
    R=*START;
    while(R!=NULL && R->Next!=NULL)
    {
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R)
        {
            return TRUE;
            break;
        }
    }
    if(T==R)
    {
    }
    else
    return FALSE;
}
int main()
{
    struct Node *START,*P,*Q;
    START=NULL;
    InsBeg(&START,100);
    InsBeg(&START,90);
    InsBeg(&START,80);
    InsBeg(&START,70);
    InsBeg(&START,60);
    InsBeg(&START,50);
    InsBeg(&START,40);
    InsBeg(&START,30);
    InsBeg(&START,20);
    InsBeg(&START,10);
    P=START;
    Q=START;
    while(P->Next!=NULL)
    {
        P=P->Next;
    }
    while(Q->Info!=70)
    {
        Q=Q->Next;
    }
    P->Next=Q;
    if(CycleDetection(&START))
    printf("Cycle");
    else
    printf("Not A Cycle");
    return 0;
}