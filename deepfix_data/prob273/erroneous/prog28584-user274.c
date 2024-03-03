#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int h,i,j,k;
	if(h%2==0){
	    printf("give an odd number please"); }
	else{
	for(i=1;i<=h;i++) {
	    for(j=i,j<=(h-1)/2;j++)
	    {printf(" ");}
	    for(k=1,k<=i,k++) {
	        printf("(h+1)/2-k-1"); }
	    printf("\n"; } }
	return 0; }