#include <stdio.h>
#include <stdlib.h>
void space(int);
void space(int n){
    int i;
    for(i=1;i<=n;i++){
        printf(" "); } }
int main() {
	int h,i,j,n,l;
	scanf("%d",&h);
	n=(h-1)/2;
	l=0;
	for(i=1;i<=(h+1)/2;i++){
	    space(n);
	    printf("*");
	    n=n-1;
	    if(i==1||i==h){
	        printf("\n");
	        continue;}
	    space(l);
	    l=l+1;
	        printf("*");
	        printf("\n"); } }
	return 0; }