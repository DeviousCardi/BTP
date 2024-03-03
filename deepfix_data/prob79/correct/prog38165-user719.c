#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,u,v,i,j,**A,**B;
	scanf("%d%d\n%d%d\n",&m,&n,&u,&v);
	A=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;j++){
	    A[i]=(int*)malloc(n*sizeof(int)); }
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	            scanf("%d",&A[i][j]); }
	    scanf("\n"); }
	B=(int**)malloc(u*sizeof(int*));
	for(i=0;i<u;j++){
	    B[i]=(int*)malloc(v*sizeof(int)); }
	for(i=0;i<u;i++){
	    for(j=0;j<v;j++){
	            scanf("%d",&B[i][j]); }
	    scanf("\n"); }
	for(i=0;i<m;i++){
	    for(j=0;j<=n;j++){
	        if(j==n-1)
	        printf("%d\n ",A[i][j]);
	        else
	        printf("%d ",A[i][j]); } }
	return 0; }