#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i; int *a,*b;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	 for(i=0;i<m;i++)
	   scanf("%d",&b[i]);
	 if(n==0||m==0){ printf("0");return 0;}
	 int **c;
	 c=(int**)malloc(sizeof(int*)*m);
	   for(i=0;i<m;i++)
	    c[i]=(int*)malloc(sizeof(int)*2);
	return 0; }