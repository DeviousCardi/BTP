#include <stdio.h>
int main(){
    int k,n,i,j,a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0,j=1;i<n,j<n;i++,j++) {
        if(a[i]+a[j]<k) {
            printf("unlucky");
            break; } }
    for(i=0,j=1;i<n,j<n;i++,j++) {
        if(a[i]+a[j]>k) {
            printf("unlucky");
            break; } }
    for(i=0,j=1;i<n,j<n;i++,j++) {
        if(a[i]+a[j]==k)
        printf("lucky"); }
    return 0; }