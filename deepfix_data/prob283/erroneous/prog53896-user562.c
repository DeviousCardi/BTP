#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return m;
    else if(m>0 && n==0)
    return ackermann(m-1,1);
    else if(m>0 && n>0)
    return ackermann(m-1,ackermann(m,n-1)) }
int main() {
    int m,n,k;
    scanf("%d",&k)
	for(i=0;m<4;m++) {
	    for(n=0;n<6;n++)
	    if(ackermann(m,n)==k)
	    printf("%d %d",m,n) }
	return 0; }