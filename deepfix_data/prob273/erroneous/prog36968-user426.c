#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i=1,j=1;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    for(j=1;j<=(h/2+1);j++){
	        if(i<(h/2+2)){
	            if(j<h/2-i+1)
	            printf(" ");
	            else
	            printf("%d",j%10) }
	        else }
	    printf("\n"); }
	return 0; }