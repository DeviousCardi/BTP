#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,j,i;
	scanf("%d\n",&n);
	int a[n];
	for(j=0;j<=n-1;j++) {
	    scanf("%d",&a[j]); }
	scanf("%d\n",&t);
	for(j=1;j<=t;j++){
	    scanf("%d",&i);
	    if(a[i]>n){printf("Yes\n");}
	    else{printf("No\n");} }
	return 0; }