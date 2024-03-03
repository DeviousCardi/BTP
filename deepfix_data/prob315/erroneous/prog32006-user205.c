#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	    scanf("%d",&a[i]);
	int total=0;
	int inv[n];
	for(int i=0; i<n; i++)
	    inv[i]=0;
	for(int i=0; i<n; i++) {
	    for(int j=i+1; j<n; j++) {
	        if(a[i]>a[j]) {
	            inv[i]++;
	            total++; } } }
	printf("%d",&total);
	for(int i=0; i<n; i++)
	    printf("%d", inv[i]);
	return 0; }