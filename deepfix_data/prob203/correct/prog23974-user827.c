#include <stdio.h>
int main() {
	int n,i,j,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    k=0;
	    for(j=0;j<n;j++) {
	        if(a[i]==a[j]) {
	            k++; }
	        if(k==1) {
	            printf("YES"); }
	        else {
	            printf("NO"); } } }
	return 0; }