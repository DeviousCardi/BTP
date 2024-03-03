#include <stdio.h>
#include <stdlib.h>
int count = 0, a[30];
int hanoi(int p)
{ if(p==0) return 0;
  if(a[p]!=0)
    { return a[p]; }
  count = 2*hanoi(p-1)+1;
  a[p] = count;
  return count; }
int main() {
    int i,  num, t, k;
    for(i=0; i<30; i++)
       a[i] = 0;
    scanf("%d", &t);
    for(i=0; i<t; i++)
       { scanf("%d", &k);
         num = hanoi(k);
         printf("%d\n", num);
         count = 0; }
	return 0; }