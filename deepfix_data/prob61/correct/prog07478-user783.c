#include<stdio.h>
int main() {
    int n;
    int k;
    int a[100];
    int count[100];
    int i,j;
    int d=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<=k;i++) {
        count[i]=0; }
    for(i=0;i<=k;i++) {
        for(j=0;j<n;j++) {
            if(a[j]==i)
            count[d]=count[d]+1; }
        d++; }
    for(i=0;i<=k;i++) {
        if(count[i]>0) {
            for(j=0;j<count[i];j++)
            printf("%d ",i); } }
    return 0; }