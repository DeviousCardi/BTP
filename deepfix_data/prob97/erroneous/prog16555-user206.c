#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i;
	scanf("%d",&a);
	for(i=0;i<a;i++) {
	    int r;
	    for(r=a-i;r>=0;r--) {
	        printf(" "); }
	    int j;
	    for(j=a-i;j<=a+;j++) {
            printf("%d",j); } }
	return 0; }