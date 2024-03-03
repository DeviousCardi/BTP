#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1000];
	int b[1000]={0};
	int n,i,j,c=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	       if(a[j]<a[i]) {
	           c++;
	           b[i]++; } } }
	printf("%d\n",c);
	for(i=0;i<n;i++) {
	    printf("%d ",b[i]); }
	return 0; }