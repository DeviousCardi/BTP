#include<stdio.h>
int a[100000], m[100000];
int maxtill(int x) {
    int z;
    if(m[x]==0) {
        if(x==0) {
          m[0]=1; }
        else {
          m[x]=1;
          for(int i=0;i<x;i++) {
            z=maxtill(i);
            if(a[i]<a[x]&&z>=m[x]) {
                m[x]=z+1; } } } }
    printf("%d=%d\n",x,m[x]);
    return m[x]; }
int main() {
    int n, i, c;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        m[i]=0; }
    c=maxtill(n-1);
    for(i=0;i<n;i++) {
        if(c<m[i]) {
            c=m[i]; } }
    printf("%d\n",c);
    return 0; }