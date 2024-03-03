#include<stdio.h>
#include<limits.h>
int min(int a[],int m);
int min(int a[],int m) {
    int b,i,j;
    for(i=0;i<m;i++) {
        b=a[i];
        for(j=m-1;j>=i+1;j--) {
            if(a[i]>=a[j]) {
                a[i]=a[j];
                a[j]=b;
                b=a[i]; } } }
    return 0; }
int main() {
    int n,m,i,j,a[100000],y,k;
    scanf("%d%d",&n,&m);
    if((n<=0)||(m<=0)) {
        return 0; }
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&y);
            if(j==1) {
                k=y; }
            if(k<=y) {
                k=y; } }
        a[i-1]=k; }
    min(a,m);
    printf("%d",a[0]);
    return 0; }