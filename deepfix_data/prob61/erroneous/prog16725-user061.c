#include<stdio.h>
int main() {
    int n,i;
    scanf("%d%d", &n,&k);
    int a[n],c[k+1];
    for (i=0;i<n;i++){
        scanf("%d", &a[i]); }
    for (i=0;i<=k;i++){
        c[i]=0; }
    for (i=0;i<n;i++){
        c[a[i]]++; }
    int total =0;
    for (i=0;i<=k;i++){
        int t=c[i];
        c[i] = total;
        total+=t; }
    int op[n];
    for(i=0;i<n;i++) {
        op[c[i]]=i;
        c[i]+=1; }
    for(i=0;i<n;i++) {
        printf("%d ",op[i]); } }