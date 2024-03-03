#include<stdio.h>
int a[1000], m[1000];
int maxtill(int x) {
    if(x==0) {
        m[0]=1; }
    else {
        if(m[x]==0) {
            for(int i=0;i<x;i++) {
        if(a[i]<a[x]&&maxtill(i)>=m[x]) {
            m[x]=1+maxtill(i); } }
    if(m[x]==0) {
        m[x]=1; } } }
    return m[x]; }
int main() {
    int n, i, c;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        m[i]=0; }
    c=maxtill(n-1);
    printf("%d",c);
    return 0; }