#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,a=0;
	int arr[20];
	scanf ("%d",&n);
	for(j=0;j<n;j++) {
	    scanf("%d\n",&arr[j]); }
	for(j=0;j<n-1;j++) {
	    if ((arr[j+1]>arr[j])&&(arr[j-1]>arr[j])) {
	        a=1;break; }
	if(a==0) {
	    if((arr[0]<arr[1]) || (arr[n-2]>arr[n-1]))
	    a=1; }
	if (a==1) printf("Yes\n");
	else printf("No\n");}
	return 0; }