#include <stdio.h>
int main() {
	int n1,n2,k,i,j;
	scanf("%d",&n1);
	int arr1[n1];
	for(i=0;i<n1;i++){
	    scanf("%d",&arr1[i]); }
	scanf("%d",&n2);
	int arr2[n2];
		for(i=0;i<n2;i++){
	    scanf("%d",&arr2[i]); }
	k=0;
    for(i=0;i<n1;i++){
	    for(j=k;j<n2;j++){
	        if(arr2[j]==arr1[i]){
	        k=j+1;
	        break; } } }
	return 0; }