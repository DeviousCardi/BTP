#include<stdio.h>
long difference(long a[],long n) {
    if(n==1) return a[0];
    a[0]=a[0]-a[1];
    for (i=1;i<(n-1);i++){
        a[i]=a[i+1]; }
    return difference(a[],n-1); }
int main() {
    long N;
    long array[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]); }
    printf("%d",difference(array[],N));
    return 0; }