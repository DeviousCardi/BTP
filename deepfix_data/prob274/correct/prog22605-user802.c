#include <stdio.h>
int main(){
    int n,i,a[100],j=0;
    scanf("%d",&n);
    for(i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n+1;i++) {
        if(a[i]==1) {
            printf("%d ",i); } }
    for(i=1;i<n+1;i++) {
        if(a[i]>1&&a[i]==a[i]) {
            j++; } }
    printf("%d",j);
    return 0; }