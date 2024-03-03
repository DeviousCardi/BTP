#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[2*n],b[2*n];
    for(int i=0;i<2*n;i++)scanf("%d",&a[i]);
    for(int j=0;j<2*n;j++) {
        for(int k=0;k<2*n;k++) {
            if(k!=j) {
                if(a[j]==a[k]) {
                    if(k>j)b[j]=k-j;
                    else b[j]=j-k; } } } }
    for(int i=0;i<2*n;i++) {
        for(int j=i+1;j<2*n;j++) {
            if(b[i]>b[j]) {
                int x=b[i];
                b[i]=b[j];
                b[j]=x; } } }
    printf("%d",b[0]);
    return 0; }