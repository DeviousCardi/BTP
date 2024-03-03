#include <stdio.h>
#include <stdlib.h>
int main() {
 int n, a[n],i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n-1;i=i+1){
	    for(j=1+i;j<n;j=j+1){
	        if(s==a[i]+a[j]){
	            printf("(%d,%d)",a[i],a[j]); } } }
	return 0; }