#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,c=0;
	scanf("%d",&n);
	int a[n],b[1000];
	for(i=n-1;i>=0;i--){
	    scanf("%d",&a[i]);
	   for(j=n-1;j>=i;j--){
	       if(a[i]>a[j]){
	           c++; } }
	   b[i]=c-b[i+1]; }
	printf("%d",c);
	for(i=n-1;i>=0;i--){
	    printf("%d ",b[i]); }
	return 0; }