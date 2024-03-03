#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,*a,*b,i;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    int j,st=0,ct=0;
    for(i=0;i<n;i++) {
        for(j=st;j<m;j++) {
            if(a[i]-x<=b[j]&&a[i]+y>=b[j]) {
                ct++;
                st=j+1;
                break; } } }
    printf("%d\n",ct);
    st=0;
    for(i=0;i<n;i++) {
        for(j=st;j<m;j++) {
            if(a[i]-x>=b[j]&&a[i]+y>=b[j]) {
                printf("%d%d\n",i+1,j+1);
                st=j+1;
                break; } } }
    return 0; }