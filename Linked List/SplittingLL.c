#include "LLBasic.H"
void Split(struct Node **S1, struct Node **S2, int X)
{
    struct Node *P, *Q;
    P = *S1;
    while (P->Info != X)
    {
        P = P->Next;
    }
    *S2 = P->Next;
    P->Next = NULL;
    Traverse(*S1);
    printf("\n----------\n");
    Traverse(*S2);
}
int main()
{
    struct Node *S1, *S2;
    S1 = NULL;
    S2 = NULL;
    int X;
    Task(&S1);
    printf("From Which Element You Want To Split The Linked List : ");
    scanf("%d", &X);
    Split(&S1, &S2, X);
    return 0;
}