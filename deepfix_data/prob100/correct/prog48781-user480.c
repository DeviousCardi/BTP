#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int a[n],min=0,max[n][m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]); }
        max[j][i]=a[0];
        for(j=0;j<n;j++) {
            if(a[j]>=max[j][i]) {
                max[j][i]=a[j]; } } }
    for(i=0;i<m;i++) {
        min=max[j][0];
        if(min>=max[j][i]) {
            min=max[j][i]; } }
    printf("%d",min);
    return 0; }