#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    A(m-1,1);
    if(m>0&&n>0)
    A(m-1,A(m,n-1)); }
int main() {
	int k,m,n,flag=0;
	scanf("%d",&k);
	for(m=0;m<=3;m++) {
	    for(n=0;n<=5;n++) {
	        if(k==A(m,n)) {
	        flag=1;
	        printf("%d %d",m,n);
	        break; } }
	    if(flag==1)
	    break; }
	if(flag==0)
	printf("-1");
	return 0; }