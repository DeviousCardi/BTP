#include<stdio.h>
int a[1000], m[1000];
int maxtill(int x) {
    int y=1;
    if(x==0) {
        m[0]=1; }
    else {
        if(m[x]==0) {
            for(int i=0;i<x;i++) {
        if(a[i]<a[x]&&maxtill(i)>y) {
            y=maxtill(i);
            m[x]=1+y; } } } }
    return m[x]; }
int main() {
    int n, i, c;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        m[i]=0; }
    c=maxtill(n-1);
    return 0; }