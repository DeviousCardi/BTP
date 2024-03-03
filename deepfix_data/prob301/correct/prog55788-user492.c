#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000];
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    for(j=1;j<=n-i;j++){
	if(a[i]==a[i+1])
	printf("%d",a[i]);} }
	return 0; }