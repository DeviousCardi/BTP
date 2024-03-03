#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,sum;
	int arr[n];
	scanf ("d",&n);
	for(j=0;j<n;j++) {
	    if ((arr[j+1]>arr[j])&&(arr[j+1]>arr[j+2]))
	    printf ("yes");
	    else
	    printf ("no"); }
	return 0; }