#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,sum=0;
	scanf("%d",&i);
	int A[i][2];
	for(j=0;j<i;j++) {
	    scanf("%d",&A[j][0]);
	    A[j][1]=0; }
	for(j=0;j<i;j++) {
	    for(l=0;l<i;l++) {
	        if(A[l][0]>A[j][0] && l<j) {
	            A[l][1]++; } } }
	for(j=0;j<i;j++) {
	    sum+=A[j][1]; }
	printf("%d\n",sum);
	for(j=0;j<i;j++) {
	    printf("%d ",A[j][1]); }
	return 0; }