#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,mode,i,counter,a,b;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++){
	    scanf("%d",&arr[i]); }
	counter=0;
	for (i=1;i<=n;i++){
	    if(arr[i]==arr[i+1]){
	        counter++;
	        a=arr[i];
	        printf("%d\n",counter); }
	   b=counter;
	   printf("%d%d",a,b); }
	return 0; }