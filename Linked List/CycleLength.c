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
int CycleLength(struct Node **START)
{
    struct Node *T,*R;
    int C=1;
    T=*START;
    R=(*START)->Next;
    if(CycleDetection(&(*START)))
    {
        while(T!=R)
        {
            T=T->Next;
            R=R->Next;
            R=R->Next;
        }
        T=T->Next;
        while(T!=R)
        {
            T=T->Next;
            C=C+1;
        }
        return C;
    }
    else
    {
        printf("Given Link List Does Not Form The Cycle");
        return -1;
    }
}
int main()
{
    struct Node *START,*P,*Q;
    START=NULL;
    Task(&START);
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
    printf("Length Of Cycle Is ---> %d",CycleLength(&START));
    return 0;
}