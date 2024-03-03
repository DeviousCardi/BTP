#include<stdio.h>
int max(int a,int b);
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d ",&a[i]);
    int maxt[n];
    for(i=0;i<n;i++) {
        for(j=0;j<i&&a[j]<a[i];j++) {
            maxt[i]=max(max(1+a[j],1),1); } }
    return 0; }
int max(int a,int b){
    if(a>b){
        return a; }
    else{
        return b; } }