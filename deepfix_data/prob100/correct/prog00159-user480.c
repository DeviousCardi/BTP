#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int a[1000],min,max[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]); }
        max[i]=a[0];
        for(j=0;j<n;j++) {
            if(a[j]>max[i]) {
                max[i]=a[j]; } } }
    for(i=0;i<m;i++) {
        min=max[0];
        if(min>max[i]) {
            min=max[i]; } }
    printf("%d",min);
    return 0; }