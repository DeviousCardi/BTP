#include<stdio.h>
#include<stdlib.h>
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int times(int a[],int size,int b) {
    int i,check=0;
    for(i=0;i<size;i++) {
        if(a[i]==b) {
            check=check+1; } }
    return check; }
int elm(int a[],int size,int b) {
    int i,l;
    for(i=0;i<size;i++) {
        if(times(a,size,a[i])==b)
        l=a[i]; }
    return l; }
int main() {
    int n,l;
    scanf("%d\n",&n);
    int a[n],i,j,b=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
        l=times(a,n,a[j]);
        b=max(b,l); }
    l=elm(a,n,b);
    printf("%d",l);
    return 0; }