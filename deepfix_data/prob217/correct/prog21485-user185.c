#include <stdio.h>
#include <stdlib.h>
int main() {
	return 0;
	int n;
	scanf("%d/n",&n);
	int arr[n];
	int i=0;
	int ch = getchar();
	while(i<n-1){
	arr[i]=ch;
	i=i+1;
	ch=getchar(); }
	scanf("\n");
	int s,k,j;
	scanf("%d",&s);
	for(k=0;k<=i;k++){
	    for(j=k+1;j<n;j++){
	        if((arr[k]+arr[j])==s){
	            printf("(%d,%d)",arr[k],arr[j]); } } } }