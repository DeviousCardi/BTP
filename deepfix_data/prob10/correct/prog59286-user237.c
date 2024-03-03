#include<stdio.h>
int main() {
    int n,m,i,j,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i])
            c++; }
        b[i]=c;
        c=0; }
    m=b[0];
    for(i=1;i<n;i++) {
        if(b[i]>m)
        m=b[i]; }
    scanf("%d",m);
    return 0; }