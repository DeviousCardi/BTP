#include<stdio.h>
int difference(int a[],int n1) {
    int i;
    if(n1==1) return n1;
    else {
        a[0]=a[0]-a[1];
        for(i=1;i<n1-1;i++) {
            a[i]=a[i+1]; }
        return difference(a,n1-1); } }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    printf("%d\n",difference(arr,n));
    return 0; }