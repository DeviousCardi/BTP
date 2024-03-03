#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int index;
    for(int j=0;j<n;j++) {
        if(a[j]==1) {
            index=j; } }
    b[0]=a[index];
    int j=b[0];
    for(j=b[j];j<=n;j++) {
        b[j]=a[j-1]; }
    for(j=0;j<n;j++)
    printf("&d ",b[j]);
    return 0; }