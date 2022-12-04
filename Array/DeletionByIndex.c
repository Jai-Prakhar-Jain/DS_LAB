#include <stdio.h>
int main()
{
  int A[5], L, I;
  printf("Enter From Which Index You Want To Delete Number");
  scanf("%d", &L);
  for (I = 0; I <= 4; I++)
  {
    printf("Enter The Value Of A[%d] ", I);
    scanf("%d", &A[I]);
  }
  for (I = L; I < 4; I++)
  {
    A[I] = A[I + 1];
  }
  for (I = 0; I <= 3; I++)
    printf("%d", A[I]);
}