#include <stdio.h>
#include <stdlib.h>
float cat(int n){
    if(n==0)
    return 1;
    else
    return (((4*n)-2)/(n+1))*cat(n-1); }
int main() {
	int t,i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    printf("%f\n",cat(n)); }
	return 0; }