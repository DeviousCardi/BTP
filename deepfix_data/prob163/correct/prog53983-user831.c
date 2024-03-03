#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	char a[n],b[k];
	for(i=0; i<n; i++){
	scanf("\n%c",&a[i]); }
	int sum=0;
	for(i=0; i<n; i++){
	        sum=(sum+a[i]); }
	int add=0;
	for(j=0; j<k; j++){
	scanf("\n%c",&b[j]);}
	for(j=0;j<k; j++){
	     add=(add+b[j]); }
	int total=(add+sum);
	printf("%d",total);
	return 0; }