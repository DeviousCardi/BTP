#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,i,j,c=1,d=0,l=0;
    scanf("%d",&n);
    int a[n],temp[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i])
            c=c+1; }
        temp[d]=c;
        d++; }
    for(i=0;i<d;i++) {
        l=max(temp[i],l); }
    printf("%d",l);
    return 0; }