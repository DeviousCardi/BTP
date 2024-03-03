#include <stdio.h>
#include <stdlib.h>
void hanoi(int a[], int t, char d, char b, char c)
{ int i, k;
  for(i=0; i<t; i++)
  { k=0;
    if(a[i]>0)
    { hanoi(a[i]-1, t, d, c, b);
      hanoi(a[i]-1, t, c, b, d);
      k++; }
    printf("%d\n", k); } }
int main() {
    int a[10], t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
      scanf("%d", &a[i]);
    hanoi(a, t, 'm', 'n', 'o');
	return 0; }