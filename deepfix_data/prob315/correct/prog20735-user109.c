#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,count=0,sum=0;
	scanf("%d",&n);
	int array[n];
	int inv[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&array[i]); }
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;i++){
	        if (array[i]>array[j]){
	            count++; } }
	    inv[i]=count;
	    sum=sum+count; }
	printf("%d\n",sum);
	for(int i=0;i<n-1;i++){
	    printf("%d ",inv[i]); }
	printf("%d",inv[n-1]);
	return 0; }