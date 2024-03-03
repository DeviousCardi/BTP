#include <stdio.h>
#include <stdlib.h>
int moves(int m);
int main() {
	int i=0,t,n;
	scanf("%d\n",&t);
    for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    printf("%d",moves(n));
	    printf("%d\n",n); }
	return 0; }
int moves(int m)
{  int i;
    if(m==1)
    m=m+1;
    else if(m==0)
    m=m+0;
    else
    m=2*moves(m-1)+1
    return m; }