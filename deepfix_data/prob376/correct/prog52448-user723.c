#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    float b=1.0;
	if(n==0) return 1;
	if(n==1) return 1;
	else{
	    b=((2.0*(2*n-1))/(n*(n+1)))*cat(n-1);
	    return b; } }
int main() {
	int i,t;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    printf("%d\n",cat(a[i])); }
	printf("%d",(2.0*(2*2-1))/(2*(2+1)));
	return 0; }