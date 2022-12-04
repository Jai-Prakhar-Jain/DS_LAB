#include"LLBasic.H"
void Copy(struct Node *S1,struct Node **S2)
{
    struct Node *P;
    P=S1;
    while(P!=NULL)
    {
        InsEnd(&(*S2),P->Info);
        P=P->Next;
    }
    printf("Copied Linked List Is ---> ");
    Traverse(*S2);
}
int main()
{
    struct Node *START1,*START2;
    START1=NULL;
    START2=NULL;
    Task(&START1);
    Copy(START1,&START2);
    return 0;
}