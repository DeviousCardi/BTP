#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int i,n,k;
    scanf("%d",&n);
    int a[n];
    maxtill[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n;i++) {
        for(j=0;j<i;j++) {
            maxtill[i]=max(max(1+maxtill[j]),1); } }
    return 0; }