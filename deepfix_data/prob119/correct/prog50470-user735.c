#include <stdio.h>
#include <stdlib.h>
int hanoi(int a, char d, char b, char c)
{ int  k=0;
  if(a>0)
    { hanoi(a-1,  d, c, b);
      hanoi(a-1,  c, b, d);
      k++; }
   return k; }
int main() {
    int a, t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {  scanf("%d", &a);
       printf("%d\n", hanoi(a,'m', 'n', 'o'));  }
	return 0; }