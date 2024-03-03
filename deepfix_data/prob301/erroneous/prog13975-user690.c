#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,mode,i,counter;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++){
	    scanf("%d",&arr[i]); }
    k=1;
    while(i<n+1){
    counter=0;
    for(i=k;i<=n;i++){
        if(arr[i]=arr[i+1]){
          counter++; }
        else{
            break; } }
    k=i; }
	return 0; }