#include <stdio.h>
#include <stdlib.h>
void hanoi(int a, char d, char b, char c)
{ int  k=0;
  if(a>0)
    { hanoi(a-1,  d, c, b);
      hanoi(a-1,  c, b, d);
      k++; } }
int main() {
    int a, t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {  scanf("%d", &a);
       hanoi(a,'m', 'n', 'o');  }
	return 0; }