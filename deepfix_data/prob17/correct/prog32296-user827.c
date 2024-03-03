#include<stdio.h>
int main() {
    int n,m,i,j,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
        if(b[0]==a[i]) {
            k=i;
            break; } }
    printf("%d",k);
    return 0; }