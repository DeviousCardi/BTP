#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,k=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	printf( "%d %d %d %d", n, m, x, y);
	int a[n];
	int b[m];
	int c[200];
	int d[200];
	for (i=0;i<n;i++)
	scanf("%d",&a[n]);
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if((a[i]-x<=b[j] )&& b[j]<=(a[i]+y))
            {   printf("*");
                c[k]=i;
                d[k]=j;
                b[j]=-200;
                k++;
                break; } } }
    printf("%d\n",k);
    for(i=0;i<k;i++) {
        printf("%d %d\n",c[k]+1,d[k]+1); }
  	return 0; }