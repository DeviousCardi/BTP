#include<stdio.h>
int max(int a,int b) {
    if(a>b)return a;
    else return b; }
int main() {
    int n,x;
    scanf("%d",&n);
    int a[n],b[n];b[0]=1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        x=1;
        for(int j=i+1;j<n;j++) {
            if(a[j]>a[i])x=x+1; }
        b[i]=x; }
    for(int i=0;i<n;i++) {
       for(int j=i+1;j<n;j++) {
           if(b[i]<b[j]) {
               int x=b[i];
               b[i]=b[j];
               b[j]=x; } } }
    printf("%d",b[0]);
    return 0; }