#include <stdio.h>
int main() {
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int arr[n],c[k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<k;i++) {
        c[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<k;j++) {
            if(arr[i]==j) {
                c[j]=c[j]+1; } } }
    int out[n],p=0;
    for(i=0;i<k;i++) {
        if(c[i]>0) {
            for(j=0;j<c[i];j++) {
                out[p]=i;
                p=p+1; } } }
    for(i=0;i<n;i++) {
        printf("%d ",out[i]); } }