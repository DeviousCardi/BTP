#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[1000],a[1000];
	int n,count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	scanf("%d",&arr[i]);
	a[i]=0; }
	for(int i=0;i<n;i++) {
	    for(int j=i+1;j<n;j++) {
	        if(arr[i]>arr[j]) {
	            a[i]+=1;
	            count+=1; } } }
	printf("%d\n",count);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0; }