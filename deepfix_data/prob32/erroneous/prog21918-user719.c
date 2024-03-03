#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]); }
	if(for(i=0;i<n;i++){
	if((a[i]<a[i-1]&&a[i]<a[i+1])||a[1]<a[2]||a[n-1]<a[n-2])){{
	printf("Yes");
	break; }
	else{
	printf("No"); } }
	return 0; }