#include <stdio.h>
#include <stdlib.h>
int B(int i,int j) {
    if(i<j)
    return 0;
    if(i==0&&j==0)
    return 1;
    if(j==0)
    return 1;
    return B(i-1,j)+B(i-1,j-i); }
int main() {
	int b,i,j;
	scanf("%d",&b);
	for(i=0;i<20;i++) {
	    for(j=0;j<10;j++) {
	        if(B(i,j)==b){
	        printf("%d %d",i,j);
	        break; } }
	    if(B(i,j)==b)
	    break; }
	return 0; }