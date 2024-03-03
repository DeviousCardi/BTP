#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n)
{  int i;
    if(n==1)
    return 1;
    i=2*tower(n-1);
    return i; }
int main()
{   int a[10],i,n;
    char A,B,C;
    scanf("%d",&n);
  printf("%d",(tower(4)-1));
	return 0; }