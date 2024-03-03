#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,mode,i,counter,k=1;
	scanf("%d",&n);
	int arr[n],a[n],b[n];
	for(i=1;i<=n;i++){
	    scanf("%d",&arr[i]); }
	while(i<=n){
	counter=0;
	for (i=1;i<=n;i++){
	    if(arr[i]=arr[i+1]){
	        counter++;
	printf("%d\n",counter); } } }
	return 0; }