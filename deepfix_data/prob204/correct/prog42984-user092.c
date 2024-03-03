#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
	int forw[1000],rev[1000];
	int i;
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&forw[i]); }
	for(i=n-1;i>=0;i--) {
	    scanf("%d",&rev[i]); }
	if(forw[i]==rev[i])
	  printf("Yes");
	else
	  printf("No");
	return 0; }