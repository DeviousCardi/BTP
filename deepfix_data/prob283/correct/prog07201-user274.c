#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
    if(m==0)
    return n+1;
    else if(n==0&&m>0)
    return A(m-1,1);
    else
    return A(m-1,A(m,n-1)); }
int main() {
	int k,i,j,a,b;int count;
	scanf("%d",&k);
	for(i=0;i<=3;i++)
	{  count=0;
	    for(j=0;j<=5;j++) {
	        if(k==A(i,j))
	       { a=i;
	        b=j;
	        count=1;
	        break;} }
	    if(count==1)
	    break; }
	if(count==0)
	printf("-1");
	else
	printf("%d %d",a,b);
	return 0; }