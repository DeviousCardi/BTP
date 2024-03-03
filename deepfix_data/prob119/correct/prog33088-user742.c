#include <stdio.h>
#include <stdlib.h>
int count = 1;
int hanoi(int k, int A, int B, int C)
{ if(k==0) return 0;
  if(k==1) return 1;
  count+= hanoi(k-1, A, C, B);
  count++;
  count += hanoi(k-1, B, A, C);
  return count; }
int main() {
    int A=1, B=2, C=3;
    int i, num=0, t, k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
       { scanf("%d", &k);
         num = hanoi(k, A, B, C);
         printf("%d\n", num); }
	return 0; }