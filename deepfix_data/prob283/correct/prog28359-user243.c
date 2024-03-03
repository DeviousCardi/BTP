#include <stdio.h>
#include <stdlib.h>
int ackmn(int m,int n) {
    if(m==0)
    return n+1;
    if(m>0 && n==0)
    return ackmn(m-1,1);
    if(m>0 && n>0)
    return ackmn(m-1,ackmn(m,n-1)); }
int main() {
	int m,n,k,c=0;
	scanf("%d",&k);
	for(m=0;m<=3;m++) {
	    for(n=0;n<=5;n++) {
	        if(ackmn(m,n)==k) {
	            c=1;
	        printf("%d %d",m,n);
	        break; } } }
	if(c==0)
	printf("-1");
	return 0; }