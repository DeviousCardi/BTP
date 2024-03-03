#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j=0;
	scanf("%d %d %d %d", &n, &m, &x, &y);
	int a[n], b[m], c[m], d[m];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=0;i<m;i++) scanf("%d", &b[i]);
    for(i=0;i<n;i++){ if((a[i]-x<=b[j])&&(b[j]<=a[i]+y)&&(j<m)){c[j]=i+1; d[j]=j+1;j++;}}
    printf("%d\n",j);
    for(i=0;i<j;i++){printf("%d %d",c[i],d[i]); if(i!=j-1){printf("\n");}}
    return 0; }