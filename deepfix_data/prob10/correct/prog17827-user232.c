#include<stdio.h>
int maximum(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,i,j,k,l,m;
    scanf("%d",&n);
    int a[n],max[20];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    m=1;
    if(n<=20) {
    for(j=0;j<n;j++) {
        l=1;
        max[0]=a[j];
        for(k=j+1;k<n;k++) {
           if(a[k]>max[l-1]) {
               max[l]=a[k];
               l++; } }
        m=maximum(m,l); }
    printf("%d",m); }
    return 0; }