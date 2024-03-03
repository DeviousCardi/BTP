#include<stdio.h>
#include<limits.h>
int main() {
    int i,j,n,m,least_max,k;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(j=0;j<m;j++) {
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
        b[j]=a[0];
        for(k=1;k<n;k++) {
            if(b[j]<a[k]) {
                b[j]=a[k]; } } }
    least_max=b[0];
    for(i=0;i<m;i++) {
        if(least_max>b[i]) {
            least_max=b[i]; } }
    printf("%d",least_max);
    return 0; }