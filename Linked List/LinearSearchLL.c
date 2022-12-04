#include"LLBasic.H"
int LinearSearch(struct Node **START,int X)
{
    struct Node *P;
    int C=1;
    P=*START;
    while(P->Next!=NULL)
    {
        if(P->Info!=X)
        {
            P=P->Next;
            C=C+1;
        }
        if(P->Info==X)
        {
            break;
        }
    }
    return C;
}
int main()
{
    struct Node *START;
    int X;
    START=NULL;
    Task(&START);
    printf("\nEnter The Number You Want To Search : ");
    scanf("%d",&X);
    printf("Element Is Present At Node ---> %d ",LinearSearch(&START,X));
    return 0;
}
