#include <stdio.h>
#include <stdlib.h>
void space(int g)
{ int i;
  for (i=0;i<g;i++)
   printf(" "); }
int main() {
  int i, j, k=0, l=1, n ;
  scanf("%d",&n);
  for(i=1;i<2*n+2;i++) {
     space(n+l-i);
     for (j=0;j<i-k;j++)
     {  if ((j+i)%2==0)
         printf("*");
        else
         printf("x"); }
    if (i>n)
    { l+=2;
      k+=2; }
    printf("\n"); }
	return 0; }