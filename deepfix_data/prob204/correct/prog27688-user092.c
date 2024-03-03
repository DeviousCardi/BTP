#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
	int a[n],b[n];
	int i,j;
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&a[i]); }
	for(j=n-i-1;j>=0;j=j-1) {
	    scanf("%d",&b[j]); }
	if (a[i]==b[j])
	  printf("Yes");
	else
	  printf("No");
	return 0; }