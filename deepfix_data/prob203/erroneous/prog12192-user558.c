#include <stdio.h>
int main() {
	int n,a[50],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[j]!=b[i]) {
	        printf("NO");
	        return 0; }
	        else{
	        printf("YES");
	        return 0; } } }
	return 0; }