#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,a[20];
    int t,j,b[15];
	scanf ("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%c",&a[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++){
	    scanf("%c",&b[j]);
	    if(b[j]<b[j-1] && b[j]<b[j+1]) {
	        printf("Yes"); }
	    else {
	        printf("No"); } }
	return 0; }