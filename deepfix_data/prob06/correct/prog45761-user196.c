#include <stdio.h>
#include<stdlib.h>
int main() {
     int n,m,x,y,i,j,*a,*b,*c,*d,k=0;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    c=(int*)malloc(n*sizeof(int));
    d=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
    printf("%d,%d\n",a[i]-x,a[i]+y); }
    for(i=0;i<m;i++) {
        printf("%d\n",b[i]); }
    free(d);
    free(c);
    free(b);
    free(a);
    return 0; }