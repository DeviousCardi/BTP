#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,i;
	scanf("%d",&a);
	for(i=1;i<a;i++) {
	    for(b=1;b<=a-i;b++) {
	     printf(" "); }
	    printf("%c\n",'*'); }
	for(i=1;i<2*a;i++) {
	   printf("%c",'*') ; }
	return 0; }