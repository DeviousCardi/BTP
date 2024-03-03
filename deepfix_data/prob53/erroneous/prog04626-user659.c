#include<stdio.h>
int difference(int a[],int size) {
    if(size==0)
    return 0;
    else
    return difference(a,size-1)-a[size-1]; }
int main() {
    int i,n,arr[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]) }
    printf("%d",difference(a,n));
    return 0; }