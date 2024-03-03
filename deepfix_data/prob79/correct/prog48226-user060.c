#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,x=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int copy[1000];
	for(i=0;i<n;i++){
	    for(j=0;j<=i;j++){int count=0,sum=0;
	        for(k=j;k<=i;k++){
	            if(arr[j]<=arr[k])
	            count++;
	            sum=sum+arr[k]; }
	        if(count==i-j+1){
	            copy[x]=sum;
	            x++; } } }
	for(i=0;i<x;x++){ int math=0;
	    for(j=0;j<x;j++){
	        if(copy[i]>=copy[j])
	        math++; }
	    if(math==x)
	    printf("%d",copy[i]); }
	return 0; }