#include <stdio.h>
#include <stdlib.h>
int main() {
		int n1,n2,i;
	scanf("%d",&n1);
	int arr1[n1];
	for(i=0;i<n1;i++){
	    scanf("%d\n",&arr1[i]); }
	scanf("%d",&n2);
	int arr2[n2];
		for(i=0;i<n2;i++)
	    scanf("%d\n",&arr2[i]);
	    int d=arr1[0];
	    for(i=0;i<n1;i++){
	        if(d>arr1[i])
	        d=arr1[i]; }
	    printf("%d",d);
	return 0; }