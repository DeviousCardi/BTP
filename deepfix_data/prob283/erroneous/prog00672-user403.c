#include <stdio.h>
#include <stdlib.h>
void acker(int m, int n) {
    if(m==0)
    return (n+1);
    if(m>0 && n==0)
    acker(m-1,1);
    if(m>0 && n>0)
    acker(m-1,acker(m,n-1)); }
int main() {
	int k;
	scanf("%d",&k);
	for(m=0;m<=3,m++) {
	    for(n=0,n<=5,n++) {
	        acker(m,n); } }
	return 0; }