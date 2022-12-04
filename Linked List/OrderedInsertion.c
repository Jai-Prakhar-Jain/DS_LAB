#include "LLBasic.H"
int main()
{
    struct Node *START;
    int N,I,K;
    START = NULL;
    printf("How Many Elements You Want To Insert : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter Element %d : ",I);
        scanf("%d",&K);
        AscendingInsertion(&START,K);
    }
    Traverse(START);
    return 0;
}
