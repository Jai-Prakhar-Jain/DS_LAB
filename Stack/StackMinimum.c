#include"MyStackInt.h"
int main()
{
    Initialize();
    int N,A,I,M;
    printf("Total Number Of Elements You Want To Insert : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Element %d : ",I);
        scanf("%d",&A);
        Push(A);
    }
    M=Pop();
    while(IsEmpty()==FALSE)
    {
        I=Pop();
        if(M>I)
        {
            M=I;
        }
    }
    printf("Minimum Element In The Given Stack Is %d",M);
    return 0;
}