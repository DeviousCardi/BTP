#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0&&n==0)
    return ackermann(m-1,1);
    else
    return
    ackermann(m-1,ackermann(m,n-1)); }
int main() {
	int n,i,j,k,c=0;
	scanf("%d",&n);
	for(i=0;i<=3;i++) {
	    for(j=0;j<=5;j++) {
	       k= ackermann(i,j);
	       if(k==n) {
	           printf("%d %d\n",i,j);
	           c++; } }
	    if(c==1)
	    break; }
	if(c==0)
	printf("-1\n");
	return 0; }