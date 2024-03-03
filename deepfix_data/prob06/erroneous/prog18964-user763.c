#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,m,x,y,*a,*b,k=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
    b=(int*)malloc(m*sizeof(int));
	for(j=0;j<m;j++)
	    scanf("%d",&b[i]);
	for(i=0;i<n;i++) {
	    if((b[k]>=(a[i]-x))&&(b[k]<=(a[i]+y))) {
            printf("%d %d\n",i+1,k+1);
            k++; }
	    else if(a[i]>b[k])
	    k++ }
	return 0; }