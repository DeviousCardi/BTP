#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,k,a[100],c,cmax=0;
    for(i=0;i<l;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<=l-r;i++) {
        c=0;
        for(j=i;j<i+r;j++) {
            for(k=j;k<i+r;k++) {
                if(a[j]>a[k]) {
                    c=c+1; } } }
        if(c>cmax) {
            cmax=c; } }
    return cmax; }
int main() {
    int n,k,inv;
    scanf("%d%d",&n,&k);
    inv=getInversions(n,k);
    printf("%d",inv);
    return 0; }