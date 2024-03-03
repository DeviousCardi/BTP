#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	int *p;
	int *q;
	p=(int*)malloc(n*sizeof(int));
	q=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&p[i]); }
	scanf("\n");
	for(i=0;i<m;i++){
	    scanf("%d",&q[i]); }
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(p[i]-x<=q[j]&&q[j]<=p[i]+y){
	            printf("%d %d\n",i+1,j+1);
	            q[j]=-1;
	            break; } } }
	return 0; }