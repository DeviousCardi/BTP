#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else return b; }
int main() {
    int m,n,a,y,x;
    scanf("%d%d",&n,&m);
    int b[m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<1;j++) {
             scanf("%d",&a);
             y=a; }
                for(int j=1;j<n;j++) {
             scanf("%d",&a);
             y=max(y,a); }
        b[i]=y; }
    for(int k=0;k<m;k++) {
        for(int l=k+1;l<m;l++) {
            if(b[k]>b[l]) {
               x=b[k];
               b[k]=b[l];
               b[l]=x; } } }
    printf("%d",b[0]);
    return 0; }