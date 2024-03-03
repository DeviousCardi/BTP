#include <stdio.h>
#include <stdlib.h>
int pwer(int k,char p,char q,char r)
{    int x=0;
    if(k==1)
    {x++;
        return x; }
    pwer(k-1,p,r,q);
    x = x+1;
    pwer(k-1,r,q,p); }
int main() {
	int n,m,i;
	char A,B,C;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&m);
	    printf("%d\n",pwer(m,A,B,C)); }
	return 0; }