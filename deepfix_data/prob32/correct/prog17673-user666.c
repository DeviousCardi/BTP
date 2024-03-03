#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&arr[i]); }
	int res=0;
	for(i=1;i<n-1;i=i+1) {
	    printf("%d",i);
	    if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]){res=1;} }
	if(res==0){printf("No");}
	if(res==1){printf("Yes");}
	return 0; }