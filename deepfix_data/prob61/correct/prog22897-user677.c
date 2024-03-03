#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int count[k+2],a[n+1];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<=k;i++) {
        count[i]=0; }
    for(i=0;i<=k;i++) {
        for(j=0;j<n;j++) {
            if(a[j]==i) {
                count[i]=count[i]+1; } } }
    for(i=0;i<=k;i++) {
        for(j=0;j<count[i];j++) {
            printf("%d",i); } }
    return 0; }