#include <stdio.h>
int main(){
    int n,i,a[100],j=0,r=0;
    scanf("%d",&n);
    for(i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n+1;i++) {
        if(a[i]==1) {
            printf("%d ",i); } }
    for(i=1;i<n+1;i++) {
        if(a[i]>1) {
            j++;
            r=j-1; } }
    printf("%d%d",j,r);
    return 0; }