#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0 && n==0)
    return ackermann(m-1,1);
    else
    return ackermann(m-1,ackermann(m,n-1)); }
int main() {
    int m,n,k,found=0;
    scanf("%d",&k);
	for(m=0;m<4;m++) {
	    for(n=0;n<6;n++) {
	      if(ackermann(m,n)==k)
	      printf("%d %d",m,n);
	      found=1;
	      break; } }
	if(found==0)
	printf("%d",-1);
	return 0; }