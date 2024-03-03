#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]); }
	if(n=1){printf("No");}
	else if(arr[0]>arr[1]||arr[n]>arr[n-1]){printf("Yes");}
	else{
	k=0;
	for(j=1;j<n;j++){
	    if (arr[j]>arr[j-1])&&(arr[j]>arr[j+1]){
	    k=k+1;}
	    else{k=k;} }
	if(k>0){printf("Yes");}
	else{printf("No");} }
	return 0; }