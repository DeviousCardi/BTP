#include<stdio.h>
int maxtill(int);
int n,a[1000000];
int main() {
    int i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=0;
    for(i=0;i<n;i++) {
        if(max<maxtill(i))
        max=maxtill(i); }
    printf("%d",max+1);
    return 0; }
int maxtill(int p) {
    int i,j=p,c=0,k,max=0;
    for(i=p;i<n-4;i++) {
        j=p;
        c=0;
        for(k=i;k<n-1;k++) {
            if(a[j]<a[k+1]) {
            j=k+1;
            c++; } }
        if(max<c)
        max=c; }
    return c; }