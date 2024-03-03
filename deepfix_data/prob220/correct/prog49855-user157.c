#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,c;
	scanf("%d",&h);
	for(i=1;i<=h;i=i+1){
for(c=h-i;(c>=1);c=c-1){
    printf(" "); }
	    for(j=1;j<=2*i-1;j=j+1){
	        if ((j==1)||(j==2*i-1))
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }