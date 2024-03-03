#include <stdio.h>
#include <stdlib.h>
void space(int);
void space(int n){
    int i;
    for(i=1;i<=n;i++){
        printf(" "); } }
int main() {
	int h,i,j,n;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    n=(h-1)/2;
	    space(n);
	    printf("*");
	    if(i==1||i==h){continue;}
	    for(j=1;j<=h;j++){
	        space(j-1);
	        printf("*");
	        printf("\n"); } }
	return 0; }