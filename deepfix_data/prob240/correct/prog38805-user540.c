#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
    if(n==0){
        return 1; }
    else
    return catalan(n-1)*2*(2*n-1)/(n+1); }
int main() {
	int i,j,t,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
	return 0; }