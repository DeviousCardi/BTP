#include <stdio.h>
#include <stdlib.h>
int count = 1;
int hanoi(int k, int A, int B, int C)
{ if(k==1) return count;
  count+= hanoi(k-1, A, C, B);
  count+=hanoi(1, A, B, C);
  count += hanoi(k-1, B, A, C);
  return count; }
int main() {
    int A=1, B=2, C=3;
    int i, num, t, k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
       { scanf("%d", &k);
         num = hanoi(k, A, B, C);
         printf("%d\n", num); }
	return 0; }