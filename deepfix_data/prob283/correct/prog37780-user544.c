#include <stdio.h>
#include <stdlib.h>
 int A(int m,int n){
     if(m==0)
     return n+1;
     if(m>0&&n==0)
     return A(m-1,1);
     if(m>0&&n>0)
     return A(m-1,A(m,n-1));
     return 0; }
int main() {
	int m,n,k,y=0;
	scanf("%d",&k);
	for(m=0;m<=3;m++){
	    for(n=0;n<=5;n++)
	        if(A(m,n)==k) {
	        y=1;
	        printf("%d %d",m,n);
	               break; }
	             break; }
	        if(y!=1)
	        printf("-1");
	return 0; }