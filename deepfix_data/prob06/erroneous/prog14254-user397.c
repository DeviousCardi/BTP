#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y;
	int *a,*b;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	int i,j;
	for(i=1;i<=n;i++)
	    scanf("%d ",&a[i]);
	for(j=1;j<=m;j++)
	    scanf("%d ",&b[i]);
	int k=0;
	for(j=1;j<=m;j++) {
	    for(i=1;i<=n;i++) {
	        if(b[j]>=a[i]-x && b[j]<=a[i]+y) {
	            k++;
	            printf("%d",k;)
	            break; } } }
	printf("%d",k);
	return 0; }