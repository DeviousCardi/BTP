#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j=0,k=0;
	int *a,*b,*c,*d;
	scanf("%d" "%d" "%d" "%d",&n,&m,&x,&y);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(m*sizeof(int));
	c=(int *)malloc(n*sizeof(int));
	d=(int *)malloc(m*sizeof(int));
	for(i=0;i<m;i++) {
	    scanf("%d",(b+i)); }
	for(i=0;i<n;i++) {
	    scanf("%d",(a+i)); }
	for(i=0;i<n;i++) {
	    for(;j<m;j++) {
	        if((*(b+i)>=(*(a+j)-x))&&(*(b+i)<=(*(a+j)+))) {
	            *(c+k)=i+1;
	            *(d+k)=j+1;
	            k++;
	            j++;
	            break; } } }
	printf("%d\n",k);
	for(i=0;i<k;i++) {
	    printf("%d ",*(c+i));
	    printf("%d\n",*(d+i)); }
	return 0; }