#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
    if(m=0) return n+1;
    else if(n=0&&m>0) return ack(m-1,1)
    else return ack(m-1,ack(m,n-1)); }
int main() {
	for(i=0;i<4;i++) {
	    for(j=0;j<6j++) {
	        if(k==ack(i,j)) {
	            printf("%d %d",m,n);
	            return 0; } }
	    printf("-1"); }
	return 0; }