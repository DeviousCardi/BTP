#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,count,m,n,x,y,*a,*b;
	scanf("%d %d %d %d",&m,&n,&x,&y);
	a=(int*)malloc(m*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	for(i=0;i<m;i++) {
	    scanf("%d",a+i); }
	 count 0;
	 k=0;
	 int c[n],d[n];
	 for(i=0;i<m;i++) {
	     for(j=0;j<n;j++) {
	         if( (*(b+j)>=(*(a+i)-x))&&(*(j)<=*(a+i)+y)) {
	             count++;
	             c[k]=j+1;
	             k++;
	             break; } } }
	 printf("%d\n",count);
	 for(i=0;i<count;i++) {
	     printf("%d %d\n",c[i],d[i]); }
	return 0; }