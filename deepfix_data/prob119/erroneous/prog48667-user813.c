#include <stdio.h>
#include <stdlib.h>
void pwer(int k,char p,char q,char r)
{    int x=0;
    if(k==1)
    {x++;
        return x; }
    pwer(int k-1,char p,char r,char q);
    x = x+1;
    pwer(int k-1,char r,char q,char p); }
int main() {
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&m);
	    printf("%d\n",pwer(m,A,B,C)); }
	return 0; }