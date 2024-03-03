#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	int n1,n2;
	scanf("%d",&n1);
	int arr1[n1],i=0;
	for(;i<n1;i++)
	scanf("%d",&arr1[i]);
	scanf("%d",&n2);
	int arr2[n2];
	for(i=0;i<n2;i++)
	scanf("%d",&arr2[i]);
	int sm=INT_MAX,flag=0;
	for(i=0;i<n1;i++){
	    int j=0;
	    for(;j<n2;j++){
	        if(arr1[i]>sm||arr1[i]==arr2[j]){
	            break; }
	        else
	            sm=arr1[i]; } }
	if(sm==INT_MAX)
	    printf("NO");
	else
	    printf("%d",sm);
	return 0; }