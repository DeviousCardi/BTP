#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,n;
	int c=0;
	scanf("%d",&h);
	n=h;
	for(i=1;i<=h;i++) {
	    for(j=1;j<=n;j++) {
	        if(j<=c)
	        printf(" ");
	        else
	        printf("*"); }
        printf("\n");
        if(i<=((h-1)/2)) {
	      c++;
	      n--; }
	    else {
	      c--;
	      n++; } }
	return 0; }