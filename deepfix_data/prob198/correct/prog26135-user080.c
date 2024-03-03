#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j;
	int a1[30];
	int a2[30];
	scanf("%d\n",&n1);
	for(i=0;i<n1;i=i+1) {
	    scanf("%d\n",&a1[i]); }
	scanf("%d\n",&n2);
	for(i=0;i<n2;i=i+1) {
	    scanf("%d",&a2[i]); }
	return 0; }