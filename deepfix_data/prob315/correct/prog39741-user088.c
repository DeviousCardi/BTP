#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,sum=0,arr[1000],count[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	count[i]=0;
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++) {
	    if(arr[i]>arr[j]){
	        count[i]++;
	        sum++; } }
	printf("%d",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",count[i]); }
	return 0; }