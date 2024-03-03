#include <stdio.h>
#include <stdlib.h>
int catalan(int j)
{ int sum=0, i;
  if(j==0)
   return 1;
  else
  { for(i=0; i<j; i++)
     sum+= catalan(j-i)*catalan(j-i-1);
    return sum; } }
int main() {
    int i, t, j[10];
    scanf("%d", &t);
    for(i=0; i<t; i++)
     scanf("%d", &j[i]);
    for(i=0; i<t; i++)
     printf("%d\n", catalan(j[i]));
	return 0; }