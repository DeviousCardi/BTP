#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,q,p;
	scanf("%d",&n);
	scanf("%d",&k);
	char a[n],b[k];
	for(i=0; i<n; i++){
	scanf("\n%c",&a[i]); }
	int sum=0;
	for(p=0; p<n; p++){
	        sum=sum+a[p]; }
	int add=0;
	for(j=0; j<k; j++){
	scanf("\n%c",&b[j]);}
	for(q=0;q<k; q++){
	     add=add+b[q]; }
	int total=(add+sum);
	printf("%d",total);
	return 0; }