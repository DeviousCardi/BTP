#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    float b=1.0;
	if(n==0) return 1;
	if(n==1) return 1;
	if(n!=0){
	    b=((2.0*(2*n-1))/n+1)*cat(n-1);
	    return b; } }
int main() {
	int i,t;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    printf("%d\n",cat(a[i])); }
	return 0; }