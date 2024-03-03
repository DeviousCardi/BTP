#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(h%2==0){
	    printf("give an odd number please"); }
	else{
	for(i=1;i<=h;i++) {
	   if(i<=(h+1)/2) {
	    for(j=i;j<=(h+1)/2;j++)
	    {printf(" ");
	    }}
	   else
	 {for(j=i-(h+1)/2;j>=(h+1)/2;j--)
	 printf(" ");} }
	    for(k=i;k>=1;k--) {
	        printf("%d",abs((h+1)/2-k+1)); }
	    printf("\n"); }
	return 0; }