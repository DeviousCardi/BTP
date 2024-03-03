#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(h%2!=0){
	    for(i=h;i>=1;i=i-2){
        for(j=1;j<=i;j++){
            printf("*"); }
        for(k=0;k<=(h-1)/2;k++){
            printf(" "); } }
	    printf("\n"); }
	return 0; }