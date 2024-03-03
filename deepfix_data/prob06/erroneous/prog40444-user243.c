#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,*a,*b,*c,i,j,s=0,k=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	printf("%d %d %d %d\n",n,m,x,&);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	c=(int*)malloc((m+n)*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(j=0;j<m;j++)
	scanf("%d ",&b[i]);
	for(i=0;i<m;i++) {
	    for(j=s;j<n;j++) {
	        if(b[i]>=a[j]-x && b[i]<=a[j]+y) {
	            c[k]=a[j];
	            c[k+1]=b[i];k++;
	            s=j+1;
	            printf("%d %d\n",j+1,i+1);
	            break; } } }
	printf("%d",(k+1)/2);
	return 0; }