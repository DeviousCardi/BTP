#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[][2]={{3,2},{-4,0},{5,6},{1,-1}};
	int B[][3]={{3,-3,-2},{2,0,4}};
	int C[4][3];int i,j,k;
	int c=0;
	for(i=0;i<4;i++) {
	    for(j=0;j<3;j++) {
	        for(k=0;k<2;k++) {
	        c=c+A[i][k]*B[k][j]; }
	        printf("%d ",c); }
	    printf("\n");
	    C[i][j]=c;
	    c=0; }
	for(i=0;i<4;i++) {
	    for(j=0;j<3;j++)
	    printf("%d ",C[i][j]);
	    printf("\n"); }
	return 0; }