#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
	int forw[1000],rev[1000];
	int i,j;
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&forw[i]); }
	for(j=n-i-1;j>=0;j--) {
	    scanf("%d",&b[j]); }
	if(forw[i]==rev[j])
	  printf("Yes");
	else
	  printf("No");
	return 0; }