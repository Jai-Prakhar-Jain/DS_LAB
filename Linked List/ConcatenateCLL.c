#include"CLLBasic.h"
void Concatenate(struct Node **CS1,struct Node **CS2)
{
    struct Node *P,*Q;
    P=(*CS2)->Next;
    (*CS2)->Next=(*CS1)->Next;
    (*CS1)->Next=P;
}
int main()
{
    struct Node *CS1,*CS2;
    int I,N,K;
    CS1=NULL;
    CS2=NULL;
    printf("How Many Elements You Want To Insert In First Circular Linked List : ");
    scanf("%d",&N);
    for (I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&CS1,K);
    }
    printf("How Many Elements You Want To Insert In Second Circular Linked List : ");
    scanf("%d",&N);
    for (I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        InsEnd(&CS2,K);
    }
    Concatenate(&CS1,&CS2);
    Traverse(CS2);
    return 0;
}