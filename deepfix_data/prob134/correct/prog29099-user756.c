#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0 && k==0)
    return 1;
    else if(k==0)
    return 1;
    else return(bin(n-1,k)+bin(n-1,k-1)); }
int main() {
	int b;
	scanf("%d",&b);
	int n,k,a;
	for(n=0;n<=20;n++) {
	    for(k=0;k<=20;k++) {
	        if(bin(n,k)==b){
	        printf("%d %d",n,k);
	        a=1;
	        break; } }
	    if(a)
	    break; }
	if(n==20)
	printf("-1");
	return 0; }