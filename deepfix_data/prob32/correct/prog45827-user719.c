#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	if(a[i]<a[i-1]&&a[i]<a[i+1]){
	printf("Yes");
	break; }
	else{
	printf("No"); } }
	return 0; }