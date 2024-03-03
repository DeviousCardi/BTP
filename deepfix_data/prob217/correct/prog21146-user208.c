#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
    scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	int S;
	scanf("%d",&S);
	for(k=0;k<n;k++){
	    for(j=k+1;j<n;j++){
	        if(S==(a[k]+a[j])){
	            printf("(%d,%d)\n",a[k],a[j]); }
	        else{
	            printf("no output\n"); } } }
	return 0; }