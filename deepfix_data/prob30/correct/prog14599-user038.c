#include <stdio.h>
int arr[100]={0};
int n,a,u;
int getMaxLessThan(int u) {
    int i=0;
    int i1=0,i2=0,b[100];
    while(i1<n) {
        if(arr[i1]<u) {
            arr[i1]=b[i2];
            i2++; }
        i1++; }
    int k=-1000;
    do {
        if(b[i]>=k) {
            k=b[i]; }
        i++; }
    while(i<i2);
    printf("%d",k);
    return 0; }
int main() {
    int l;
    scanf("%d %d",&n,&l);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int b=-1000;
    int i=0;
    do {
        if(arr[i]>=b) {
            b=arr[i]; }
        i++; }
    while(i<n);
    printf("%d",b);
    u=b;
    int p=0;
    while(p<l) {
        printf("%d",getMaxLessThan(u));
        u=getMaxLessThan(u);
        p++; }
    return 0; }