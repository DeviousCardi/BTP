#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,a[1000],max[1000];
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a[i+j]); } }
    for(i=1;i<=m;i++) {
        max[i]=0;
        for(j=1;j<=n;j++) {
            if(a[i+j]>max)
            max[i]=a[i+j]; } }
    min=a[1];
    for(i=2;i<=m;i++) {
        if(min>max[i])
        min=max[i]; }
    printf("%d"min);
    return 0; }