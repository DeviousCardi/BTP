#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,a;
	scanf("%d",&a);
	for (i=1;i<=a;i++) {
	    printf("*");
	    if(i!=1 || i!=a){
	if (i<=(a/2)) {
	    for (j=1;j<=(i-2);j++)
	    printf(" ");
	    printf("*"); }
	else {
	    for (k=1;k<=(8-i);k++)
	    printf(" ");
	    printf("*");
	}}
	    printf("\n"); }
	return 0; }