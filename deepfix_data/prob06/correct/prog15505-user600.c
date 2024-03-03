#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,l,count=0;
    int *a, *b;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    l=0;
    for(i=0;i<n;i++){
        for(j=l;j<m;j++){
            if (b[j]<=a[i]+y && b[j]>=a[i]-x) {
              count++;
              break; } }
        l=j; }
    printf("%d", count);
	return 0; }