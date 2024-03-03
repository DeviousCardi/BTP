#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	long x,y;
	scanf("%d %d %ld %ld",&n,&m,&x,&y);
	long *a=(long*)malloc(n*sizeof(int));
	long *b=(long*)malloc(m*sizeof(int));
	long *a1=(long*)malloc(n*sizeof(int));
	int i,k=0,j;
	for(i=0;i<n;i++){
	scanf("%ld",(a+i)); }
	for(i=0;i<m;i++){
	scanf("%ld",(b+i)); }
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        if((*(a+j)-x<=*(b+i))&&(*(b+i)<=*(a+j)+y)){
	         *(a1+k)=j+1;
	        k++;
	        *(a+j)=*(b+i)+*(a+j)-x;
	        break; }
	        else
	        continue; } }
	printf("%d\n",k);
	for(i=0;i<k;i++){
	    printf("%ld %d",*(a1+i),(i+1));
	    printf("\n"); }
	return 0; }