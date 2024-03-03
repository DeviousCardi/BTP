#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	int a [20];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    if (a[i]%2==0 || a[i]==0) {
	        j=j+1; } }
    if (j%2==0 && n%2==0) {
        printf("No"); }
    else {
        printf("Yes"); }
	return 0; }