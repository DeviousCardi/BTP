#include <stdio.h>
int count=0,i;
void sum(int mat[],int a) {
	    for(i=1;i<=d;i++) {
	        count=count+mat[a-i]; }
	    printf("%d",count); }
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int mat[d];
	for(i=0;i<d;i++) {
	    scanf("%d",&mat[i]); }
	if(n==0)
	printf("%d",mat[0]);
	else {
	  sum(mat[d],n); }
	return 0; }