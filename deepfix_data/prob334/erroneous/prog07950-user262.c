#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, n, i, r;
	scanf ("%d %d",&a,&b);
	for (n=1;n<=a;n++){
	    for(i=1;i<=a-n;i++){
	        printf (" "); }
	    for(i=1;i<=b-(a-n)*2){
	        r=n
	        printf("%d",r);
	        r=r+1 } }
	return 0; }