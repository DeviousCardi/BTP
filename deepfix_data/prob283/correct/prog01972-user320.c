#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0) {
        return n+1; }
    if(m>0&&n==0) {
     return   ackermann(m-1,1); }
    else
    return ackermann(m-1,ackermann(m,n-1)); }
int main() {
	int k,n,m,count=0;
	scanf("%d",&k);
	for(m=0;m<=3;m++)
	{  if(count==1)
	     break;
	    for(n=0;n<=5;n++) {
	        if(k==ackermann(m,n)) {
	            printf("%d %d",m,n);
	            count=1; } } }
	return 0; }