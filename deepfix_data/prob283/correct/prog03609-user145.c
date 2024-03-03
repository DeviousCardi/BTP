#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return (n+1);
    if(m>0&&n==0)
    return ackermann(m-1,1);
    if(m>0&&n>0)
    return (ackermann(m-1,ackermann(m,n-1))); }
int main() {
	int k;
	scanf("%d",&k);
	int m,n,flag=1;
	for(m=0;m<4;m++) {
	  for(n=0;n<6;n++) {
	        if(ackermann(m,n)==k)
	        {printf("%d %d",m,n);flag=0;break;} } }
	if(flag)
	printf("-1");
	return 0; }