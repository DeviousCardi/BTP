#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,l;
	scanf("%d",&h);
	for (i=1;i<=h;i++){
	    for(l=i;l<=(h+1)/2;l++){
	        if((l!=(h+1)/2-l)||(l!=(h+1)/2)){
	        printf(" "); }
	if(l==(h+1)/2-i){
	    printf("*"); }
	if(l==(h+1)/2){
	    printf("*\n"); } } }
	return 0; }