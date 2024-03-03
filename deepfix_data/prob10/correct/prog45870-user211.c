#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int i,n,j,m=0,k;
    scanf("%d",&n);
    int a[n];
    int maxtill[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
         k=max(max(1+maxtill[j],1),1);
         if(k>maxtill[i]) {
             maxtill[i]=k; } } }
    for(i=0;i<n;i++) {
        if(maxtill[i]>m) {
            m=maxtill[i]; } }
    printf("%d",m);
    return 0; }