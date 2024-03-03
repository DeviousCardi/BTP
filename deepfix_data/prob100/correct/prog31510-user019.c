#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,a[1000],max[1000],min;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        max[i]=INT_MIN;
        for(j=1;j<=n;j++) {
            scanf("%d",&a[j]);
            if(a[j]>max[i])
            max[i]=a[j]; } }
    min=max[1];
    for(i=2;i<=m;i++) {
        if(min>max[i])
        min=max[i]; }
    printf("%d",min);
    return 0; }