#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,count=0,cnt;
	scanf("%d",&n);
	int arr[n],inv[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]); }
	for(int i=0;i<n-1;i++){
	    cnt=0;
	    for(int j=i+1;j<n;j++){
	        if(arr[i]>arr[j]){
	            count++;
	            cnt++; } }
	    inv[i]=cnt; }
	printf("%d\n",count);
	for(int i=0;i<n-1;i++){
	    printf("%d ",inv[i]); }
	printf("%d",0);
	return 0; }