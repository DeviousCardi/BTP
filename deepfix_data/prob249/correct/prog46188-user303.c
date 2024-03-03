#include <stdio.h>
#include <stdlib.h>
int main() {
    int mod(int a){
        if(a>=0){
            a=a; }
        if(a<0){
            a=-a; }
        return a; }
	int h,i,l;
	scanf("%d",&h);
	for (i=1;i<=h;i++){
	    for(l=1;l<=(h+1)/2;l++){
	        if(!((l==(h+1)/2)||(l==mod((h+1)/2)-i+1))){
	        printf(" "); }
	if(l==mod((h+1)/2-i+1)||(l==(h=1)/2)){
	    printf("*"); }
	    printf("*\n"); } }
	return 0; }