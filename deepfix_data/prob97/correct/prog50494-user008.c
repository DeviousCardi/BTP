#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
	    for(b=1;b<=a-i;b++) {
	       printf(" "); }
	    for(c=1;c<=2*i-1;c++) {
	        printf("%d",(b+c)%10); }
	    printf("\n"); }
	return 0; }