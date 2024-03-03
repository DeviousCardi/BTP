#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,i,j,**A;
	scanf("%d%d\n",&m,&n);
	A=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;j++){
	    *(A+i)=(int*)malloc(n*sizeof(int)); }
	for(i=0;i<m;i++){
	    j=0;
	    while(j<n){
	        scanf("%d",*(A+i)+j);
	        j++;
	        if(j==n-1)
	            scanf("\n"); } }
	for(i=0;i<m;i++){
	    for(j=0;j<=n;j++){
	        if(j==n-1)
	        printf("%d\n",A[i][j]);
	        else
	        printf("%d ",A[i][j]); } }
	return 0; }