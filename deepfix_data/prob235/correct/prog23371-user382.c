#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, h;
	scanf("%d",&h);
	for(i=0;i<=h/2;i++) {
	    for(j=1;j<=h;j++) {
	        if(j<=(h/2-i))
	            printf(" ");
	        else if(j<=(h/2+1+i))
	            printf("%d",(j%10)); }
	    printf("\n"); }
	for(i=1;i<=h/2;i++) {
	    for(j=1;j<=h;j++) {
	        if(j<=i)
	            printf(" ");
	        else if(j<=(h-i))
	            printf("%d",(j%10)); }
	    if(i!=(h/2))
	        printf("\n"); }
	return 0; }