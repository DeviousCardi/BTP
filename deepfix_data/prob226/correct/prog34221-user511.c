#include <stdio.h>
int count=0,i;
int sum(int mat[],int a,int d) {
	    for(i=1;i<=d;i++) {
	        if((a-i)>=d) {
	            mat[a-i]=sum(mat,a-i,d); }
	        count=count+mat[a-i]; }
	    return(count); }
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int mat[d];
	for(i=0;i<d;i++) {
	    scanf("%d",&mat[i]); }
	if(n==0)
	printf("%d",mat[0]);
	else {
	  sum(mat,n,d); }
	printf("%d",count);
	return 0; }