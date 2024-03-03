#include <stdio.h>
int maximum(int a,int b);
int minimum(int a,int b);
int main() {
    int a[2000],n,max=0,min=10000,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",a[i]); }
    for(i=0;i<n-1;i++) {
        max=maximum(max,maximum(a[i],a[i+1])); }
    for(i=0;i<n-1;i++) {
        min=minimum(min,minimum(a[i],a[i+1])); }
    for(i=0;i<n;i++) {
        if(a[i]==max)
            a[i]=min;
        if(a[i]==min)
            a[i]=max;
        printf("%d",a[i]); }
    printf("end");
    return 0; }
int maximum(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int minimum(int a, int b) {
    if(a>b)
    return b;
    else
    return a; }