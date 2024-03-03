#include<stdio.h>
int maxtill(int);
int n,a[1000000];
int main() {
    int i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=0;
    for(i=0;i<n-1;i++) {
        if(max<maxtill(i))
        max=maxtill(i); }
    printf("%d",max+1);
    return 0; }
int maxtill(int p) {
    int i,j=p,c=0;
    for(i=p;i<n-1;i++) {
        if(a[j]<a[i+1]) {
            j=i+1;
            c++; } }
    return c; }