#include<stdio.h>
int max(int a,int b) {
    if(a>b)return a;
    else return b; }
int main() {
    int n,c=1,x=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int k=1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
            b[0]=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]>a[0])c=c+1; }
        for(int i=1;i<n;i++) {
        for(int j=k;j<c;j++) {
            if(a[i]>a[0]) {
                b[j]=a[i];
                k=k+1;
                break; } } }
    for(int i=0;i<c;i++) {
        if(b[i]>b[i+1])x=x+1; }
    printf("%d",c-x);
    return 0; }