#include <stdio.h>
int main() {
	int a[50],n,i,j;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]==a[j])
	        printf("yes"); } }
	return 0; }