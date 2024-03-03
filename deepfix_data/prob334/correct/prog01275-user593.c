#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,k,l,b;
	scanf("%d%d",&h,&b);
	for(i=1;i<=h;i++)  {
	    l=i;
	    printf(" ");
	    for(j=i;j<=b-(2*h)+(3*i)-1;j++)     {
        for(k=1;k>j;k++){
        printf(" ");}
	    printf("%d",l%10);
	    l++;}
	    printf("\n"); }
	return 0; }