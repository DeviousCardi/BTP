#include <stdio.h>
#include <stdlib.h>
int main() {
	int count =0 ,n;
	scanf("%d",&n);
	int arr[n] ,arr1[1000];
	for (int i=0 ; i<n; i++)
	    scanf("%d",&arr[i]);
	for (int i=0 ; i<n-1 ; i++)
	    for(int j=i+1; j<n; j++) {
	            if(arr[j]<arr[i]) {
	                    count++;
	                    arr1[i]++; } }
	printf("%d \n",count);
	for(int i=0; i<n; i++) {
	    printf("%d",arr1[i]);
	    if(i==n-1)
	        break;
	    printf(" "); }
	return 0; }