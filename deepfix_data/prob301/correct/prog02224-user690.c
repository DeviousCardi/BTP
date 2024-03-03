#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,mode,i,counter;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++){
	    scanf("%d",&arr[i]); }
	counter=0;
	for (i=1;i<=n;i++){
	    if(arr[i]==arr[i+1]){
	        counter++;
	        printf("%d\n",counter); } }
	return 0; }