#include<stdio.h>
int main() {
    int n,m,a[n],b[m],i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("\n");
    for(i=0;i<m;i++) {
        printf("%d ",b[i]); } }