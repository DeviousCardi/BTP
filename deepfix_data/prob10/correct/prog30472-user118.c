#include<stdio.h>
int max(int a,int b) {
    int c;
    if(a>b)
    c=a;
    else
    c=b;
    return c; }
int maxtill(int n) {
    int m=1,i,j;
    for(i=0;i<=n-1;i++) {
        for (j=i-1;j>=0;j--) {
            m=0;
            if(j>0) {
           if((1+maxtill(j))>m)
            m=maxtill(j)+1; } }
        m=max(m,1); }
    return m; }
int main () {
    int n,max;
    scanf("%d",&n);
    max= maxtill(n);
    return 0; }