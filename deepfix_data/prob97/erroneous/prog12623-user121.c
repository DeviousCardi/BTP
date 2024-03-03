#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    for(j=i;j<=h/2+1;j++)
	    printf(" ");
	    int l=h-i+1;
	    for(k=i;k<=i*2-1;k++){
	        if(l>=10)
	        l=l%10;
	        printf("%d",l);
	        int m;
	        if(l==h){
	            for(m=i;m<=i*2-1;m++){
	        if(l>=10)
	        l=l%10;
	        printf("%d",l); }
	        l++; }
	    printf("\n"); }
	return 0; }