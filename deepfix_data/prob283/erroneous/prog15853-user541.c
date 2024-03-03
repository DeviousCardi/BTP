#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n){
    if (m==0)
    return n+1;
    else if (n==0 && m>0)
    return ack(m-1,1);
    else if (m>0 && n>0)
    return ack(m-1,ack(m,n-1)); }
int main() {
	int k,m,n;
	scanf ("%d",&k);
	for (m=0;m<4;m++){
	    for (n=0;n<6;n++){
	        if (ack(m,n)==k)
	        printf ("%d %d",m,n); } }
	if (m>3 && n>5)
	printf ("-1")
	return 0; }