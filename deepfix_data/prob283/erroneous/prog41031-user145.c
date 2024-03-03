#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return ackermann(m-1,1);
    if(m>0&&n>0)
    ackermann(m-1,ackermann(m,n-1)); }
int main() {
	int k;
	scanf("%d",&k);
	int m=0,n;
	while(m<4) {
	    n=0;
	    while(n<6) {
	        if(ackermann(m,n)==k)
	        {printf("%d %d",m,n);break;}
	        n++ }
	    m++; }
	if(m==4)
	printf("-1");
	return 0; }