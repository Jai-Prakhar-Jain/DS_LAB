#include"LLBasic.H"
void SortingLL(struct Node **START)
{
    struct Node *P,*Q;
    int N,I,J,T;
    P=*START;
    Q=P->Next;
    while(P->Next!=NULL)
    {
        while (Q!=NULL)
        {
            if(P->Info>Q->Info)
            {
                T=P->Info;
                P->Info=Q->Info;
                Q->Info=T;
            }
            Q=Q->Next;
        }
        P=P->Next;
        Q=P->Next;
    }
}
int main()
{
    struct Node *START;
    START=NULL;
    Task(&START);
    SortingLL(&START);
    printf("Linked List After Sorting Is ---> ");
    Traverse(START);
    return 0;
}