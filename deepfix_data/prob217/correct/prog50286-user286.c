#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	scanf("%d",&j);
	arr[i]=j; }
	int s;
	scanf("%d",&s);
	int k,l;
	for(k=0;k<n;k++){
	    for(l=0;l<n;l++){
	        scanf("%d",&arr[l]); }
	   scanf("%d",&arr[k]); }
	if(arr[k]+arr[l]==s)
	printf("%d,%d",k,l);
	return 0; }