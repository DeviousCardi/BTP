#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y;
    int *a,*b;
    float n,m;
    scanf("%f%f%d%d",&n,&m,&,x,&y);
    a=(int*)malloc(sizeof(int)*n);
    b=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++){scanf("%d",*(a+i));printf("%d",*(a+i));}
    for(j=0;j<m;j++)scanf("%d",*(b+j));
	return 0; }