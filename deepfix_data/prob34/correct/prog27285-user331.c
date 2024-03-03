#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],n,t,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=1;j<=t;j=j+1){
	    scanf("%d",&k);
	    if((a[k]>a[k+1])&&(a[k]>a[k-1])){
	        printf("Yes\n"); }
	    else{
	        printf("No\n"); } }
	return 0; }