#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&sum);
	for(i=0;i<n;i++){
	    for(j=i;j<n;j++){
	        if((a[i]+a[j])==sum){
	            if(i!=j)
	            printf("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }