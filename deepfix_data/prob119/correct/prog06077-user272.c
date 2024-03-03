#include <stdio.h>
#include <stdlib.h>
long int moves(int d);
int main() {
	int i,t;
	scanf("%d\n",&t);
	int k[t],a[t];
    for(i=0;i<t;i++) {
	    scanf("%d\n",&k[i]);
	    printf("%d\n",k[i]); }
	 for(i=0;i<t;i++)
	{  a[i]=moves(k[i]);
	    printf("%d\n",a[i]-1); }
	return 0; }
long int moves(int d) {
    int m=1;
    m=m*2;
    d=d-1;
    if(d==1)
    return 1;
    else
    return moves(d); }