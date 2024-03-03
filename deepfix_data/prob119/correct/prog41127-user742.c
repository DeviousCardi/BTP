#include <stdio.h>
#include <stdlib.h>
int count = 0;
void hanoi(int k, int A, int B, int C)
{ if(k==0) return ;
  if(k==1) {
       count++;
       return; }
  hanoi(k-1, A, C, B);
  count++;
  hanoi(k-1, B, A, C); }
int main() {
    int A=1, B=2, C=3;
    int i, t, k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
       { scanf("%d", &k);
         hanoi(k, A, B, C);
         printf("%d\n", count);
         count = 0; }
	return 0; }