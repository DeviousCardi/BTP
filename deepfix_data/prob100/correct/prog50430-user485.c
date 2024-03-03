#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,a[1000],max[100],min,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[j]); }
    for(i=0;i<m;i++) {
        max[i]=a[i*n];
        for(j=0;j<n;j++) {
            if(a[j]>max[i])
            max[i]=a[j]; } }
    for(i=0;i<m;i++)
    printf("%d",max[i]);
    return 0; }