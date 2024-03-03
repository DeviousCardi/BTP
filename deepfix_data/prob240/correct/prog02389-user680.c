#include <stdio.h>
#include <stdlib.h>
int catlan(int  n){
    if(n==0)
    return 1;
    else
        return ((2*(2*n-1))*catlan(n-1)) / (n+1); }
int main() {
	int t,i,a[100];
	scanf("%d",&t);
	for(i=0;i<100;i++){
	   a[i]=catlan(i);
	   scanf("%d",&t);
	    if(a[i]>t)
	    printf("%d",a[i-1]); }
	return 0; }