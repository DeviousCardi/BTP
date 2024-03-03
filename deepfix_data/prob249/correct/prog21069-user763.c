#include <stdio.h>
#include <stdlib.h>
void space(int);
void space(int n){
    int i;
    for(i=0;i<n;i++){
        printf(" "); } }
int main() {
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    	for(j=(h-1)/2;j>=0;j--){
	space(j);
	printf("*");}
	    space((h-1)/2);
	    printf("*");
	    	printf("\n"); }
	return 0; }