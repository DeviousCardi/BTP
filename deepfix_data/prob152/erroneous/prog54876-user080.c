#include <stdio.h>
int search(int a[],int m,int first) {
    if((m==1)||(m==0)) {
        printf("NO"); }
    int i,b[10000],sum,j;
    for(j=0;j<m;j=j+1) {
        b[j]=a[j]; }
    for(i=first;i<(m-1);i=i+1) {
        sum=0
        sum=a[first]+a[first+1];
        while(m=<j<10000) {
            b[j]=sum; } } }
int main() {
    int i,n,a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    search(a,n,0);
    return 0; }