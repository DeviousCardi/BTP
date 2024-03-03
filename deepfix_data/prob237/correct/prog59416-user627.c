#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,a[100],c=0;
    for(i=0;i<l;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<=l-r;i++) {
        for(j=i;j<i+r;j++) {
            if(a[i]>a[j]) {
                c=c+1; } } }
    return c; }
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",getInversions(n,k));
    return 0; }