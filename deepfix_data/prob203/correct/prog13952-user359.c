#include <stdio.h>
int main() {
	int n,a[30],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    printf("%d",a[i]); }
	return 0; }