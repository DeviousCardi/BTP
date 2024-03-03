#include <stdio.h>
#include <stdlib.h>
int space(int a) {
    int space=0;
    for(space=0;space<=a-2;space++) {
        printf(" "); }
return space; }
int main() {
	int n,i,j,r;
	scanf("%d",&n);
	r=(n-1)/2;
	for(i=1;i<=r;i++) {
	    for(j=1;j<=i;j++) {
	        printf("**",space); } }
	return 0; }