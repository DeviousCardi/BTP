#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,**A;
	A=(int**)malloc(2*sizeof(int*));
	A[0]=(int*)malloc(2*sizeof(int));
	A[1]=(int*)malloc(2*sizeof(int));
	for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
	            scanf("%d",&A[i][j]); }
	    scanf("\n"); }
	for(i=0;i<2;i++){
	    for(j=0;j<=2;j++){
	        printf("%d ",A[i][j]); }
	    printf("\n"); }
	return 0; }