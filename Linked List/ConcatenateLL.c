#include"LLBasic.H"
void Concatenate(struct Node **START1,struct Node **START2)
{
    struct Node *P;
    P=*START1;
    while(P->Next!=NULL)
    {
        P=P->Next;
    }
    P->Next=*START2;
}
int main()
{
    struct Node *START1,*START2;
    START1=NULL;
    START2=NULL;
    printf(" # Enter Elements In First Linked List # \n");
    Task(&START1);
    printf(" \n# Enter Elements In Second Linked List # \n");
    Task(&START2);
    Concatenate(&START1,&START2);
    Traverse(START1);
}
