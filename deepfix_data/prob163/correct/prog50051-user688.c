#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a[100], i, count=0;
	int x=getchar();
	for(i=0; x!=EOF; i++){
	    a[i]=x-'0';
	    x=getchar();
	    count++; }
	int b[count];
	for(i=0; i<count; i++){
	    b[i]=a[i]; }
	return 0; }