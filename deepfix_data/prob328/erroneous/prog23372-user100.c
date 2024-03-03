#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	scanf("%d",&t);
	int i;
	for(j=1;j<=t;j++){
	for(i=1;i<=20;i++) {
	    int k;
	    scanf("%d",&k);
	    if(k==fibo(i-1)) {
	        printf("yes\n");
	        break; } }
	if(i>20)
	printf("no"); }
	return 0; }
int fibo(int k) {
    if(k==0)
    return 0;
    else if(k==1)
    return 1;
    else if(k<0)
    return;
    else
 {   int n;
    n=fibo(k-1)+fibo(k-2);
    return n; } }