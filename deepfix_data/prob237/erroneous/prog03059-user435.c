#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int q,t,c=0;
    for (q=l;q<l+r;q++) {
            for (t=q+1;t<l+r;t++) {
                    if (a[q]>a[t]) c++; } }
    return c; }
int main() {
    int n,r,i,max; scanf("%d%d",&n,&r);
    int a[n],b[n-r+1];
    for (i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for (i=0;i<=n-r;i++) {
            b[i]=getInversions(int i,int r); }
    max=b[0];
    for (i=1;i<n-r+1;i++) {
            if (b[i]>max) max=b[i]; }
    return 0; }