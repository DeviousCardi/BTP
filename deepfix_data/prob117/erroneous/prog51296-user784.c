#include <stdio.h>
#include <stdlib.h>
int hanoi( int n, char a, char b, char c)
{ if(n>0)
  { hanoi(n-1, a, c, b);
    hanoi(n-1, c, b, a);
    k++; }
  return k; }
int main() {
    int i, t, a[10], j=1, b[30], k;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &a[i]); }
    for(i=0; i<30; i++)
    { k=0;
      b[i]=hanoi(j, 'a', 'b', 'c');
      j++; }
    for(i=0; i<t; i++)
    { for(j=0; j<30; j++)
      { if(b[j]==a[i])
         printf("yes\n");
        else
         printf("no\n"); } }
	return 0; }