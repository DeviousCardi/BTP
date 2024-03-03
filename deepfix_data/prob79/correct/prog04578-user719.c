#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,**A;
	A=(int**)malloc(2*sizeof(int*));
	for(i=0;i<2;j++){
	    *(A+i)=(int*)malloc(2*sizeof(int)); }
	for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
	            scanf("%d",&A[i][j]); }
	    scanf("\n"); }
	for(i=0;i<2;i++){
	    for(j=0;j<=2;j++){
	        if(j==1)
	        printf("%d\n",A[i][j]);
	        else
	        printf("%d ",A[i][j]); } }
	return 0; }