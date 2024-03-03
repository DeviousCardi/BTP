#include <stdio.h>
#include <stdlib.h>
int x,y,l=0,k=0,i,j,n,m;
int newArr[100][100];
int count=0;
void command_vests(int *a,int *b){
    i=0,j=0;
    return; }
int main() {
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int *a,*b;
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",(a+i)); }
	for(i=0;i<m;i++){
	    scanf("%d",(b+i)); }
	printf("%d\n",count);
	command_vests(a,b);
	for(i=0;i<k;i++){
	    for(j=0;j<l;j++){
	        printf("%d",newArr[i][j]); }
	    printf("\n"); }
	return 0; }