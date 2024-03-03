#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,l,u,v,k,count=0;
    int *a, *b, c[10][10];
    scanf("%d %d %d %d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    l=0;
    for(i=0,k=0;i<n;i++,k++){
        for(j=l;j<m;j++){
            if (b[j]<=a[i]+y && b[j]>=a[i]-x) {
              count++;
              v=j;u=i;
              break; } }
       l=v+1;
       c[k][0]=u+1;
       c[k][1]=v+1; }
    printf("%d\n", count);
    for(i=0;i<count;i++){
        for(j=0;j<2;j++){
            printf("%d ", c[i][j]); }
        printf("\n"); }
	return 0; }