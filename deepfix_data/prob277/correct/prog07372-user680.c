#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,h,x,y,z;
	scanf("%d",&n);
	for (i=n;i>=1;i=i-2){
	 for(j=1;j<=(n-i)/2;j++){
	   printf(" "); }
	for(h=1;h<=i;h++){
	    printf("*"); }
	printf("\n"); }
	for(x=3;x<=n;x=x+2){
	    for(y=(n-x)/2;y>=0;y--){
	        printf(" "); }
	    for(z=1;z<=x;z++){
	        printf("*"); }
	printf("\n"); }
	return 0; }