#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	scanf("%d%d%d",&i,&j,&k);
	if((i+j<=k)||(i+k<=j)||(j+k<=i)) {
	    printf("Cannot form a Triangle"); }
	else if((i*i+j*j==k*k)||(i*i+k*k==j*j)||(j*j+k*k==i*i)) {
	    printf("Right Triangle"); }
	else {
	 printf("Not Right Triangle"); }
	return 0; }