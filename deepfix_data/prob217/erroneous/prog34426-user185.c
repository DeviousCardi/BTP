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
	int s,j;
	scanf("%d",&s);
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if(arr[i]+arr[j]==s){
	            printf("(%d,%d",arr[i],arr[j]); } } }