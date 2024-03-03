#include <stdio.h>
#include <stdlib.h>
int count = 1;
void hanoi(int k, int A, int B, int C)
{ if(k==0) return ;
  if(k==1)
     { printf("\nMove from %d to %d", A, C);
       count++;
       return; }
  hanoi(k-1, A, C, B);
  printf("\nMove from %d to %d", A, C);
  count++;
  hanoi(k-1, B, A, C);
  printf("\n%d", count); }
int main() {
    int A=1, B=2, C=3;
    int i, t, k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
       { scanf("%d", &k);
         hanoi(k, A, B, C);
         count = 1; }
	return 0; }