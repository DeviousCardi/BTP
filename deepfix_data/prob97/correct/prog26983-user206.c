#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,i;
	scanf("%d",&a);
	for(i=0;i<a;i++) {
	    int r;
	    for(r=a-i;r>=0;r--) {
	        printf(" "); }
	    int j;
	    for(j=a-i;j<=a+i;j++) {
            printf("%d",j%10); }
	    printf("\n"); }
	return 0; }