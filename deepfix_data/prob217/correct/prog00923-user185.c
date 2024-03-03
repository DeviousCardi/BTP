#include <stdio.h>
#include <stdlib.h>
int main() {
	return 0;
	int n;
	scanf("%d/n",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);}
	scanf("\n");
	int s,k,j;
	scanf("%d",&s);
	for(k=0;k<n;i++){
	    for(j=k+1;j<n;j++){
	        if(arr[k]+arr[j]==s){
	            printf("(%d,%d",arr[k],arr[j]); } } } }