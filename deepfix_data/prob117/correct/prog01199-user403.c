#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n)
{  int i;
    if(n==0)
    return 1;
    i=2*tower(n-1);
    return i; }
int main()
{   int i,n,j,t,y;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
       scanf("%d\n",&t);
       for(j=1;j<=200;j++)
       {    y=tower(j)-1;
           if(t<0 || t<y) printf("no");
           if(t==y) printf("%d",y); } }
	return 0; }