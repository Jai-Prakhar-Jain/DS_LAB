#include"LLBasic.H"
int MiddleElement(struct Node **START)
{
    struct Node *T,*R;
    T=*START;
    R=*START;
    while(R!=NULL && R->Next!=NULL)
    {
        T=T->Next;
        R=R->Next->Next;
    }
    return T->Info;
}
int main()
{
    struct Node *START;
    START=NULL;
    Task(&START);
    printf("Middle Element In The Given Linked List Is ---> %d",MiddleElement(&START));
    return 0;
}