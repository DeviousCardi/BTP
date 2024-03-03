#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    for(j=i;j<=h-1;j++)
	    printf(" ");
	    int l=h-i+1;
	    for(k=i;k<=i*2-1;k++){
	        printf("%d",l%10);
	        int m;
	        if(l==h){
	            for(m=i;m<=i*2-2;m++){
	                printf("%d",(l+1)%10);
	                l++; } }
	        l++; }
	    printf("\n"); }
	return 0; }