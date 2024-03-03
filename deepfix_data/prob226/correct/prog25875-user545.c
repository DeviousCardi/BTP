#include <stdio.h>
int main() {
	int d,n,var,sum=0;
	scanf("%d %d\n",&d,&n);
	int arr[50],arr1[50];
	for(int a=0;a<d;a++) {
	    scanf("%d ",&var);
	    arr[a]=var; }
	for(int a=0;a<=n;a++) {
	    if(a<d)
	    arr1[a]=arr[a];
	    else {
	        for(int b=a-d;b<a;b++)
	        sum=sum+arr1[b];
	        arr1[a]=sum; } }
	printf("%d",arr1[n]);
	return 0; }