#include <stdio.h>
int rot(int [],int);
int main() {
    int n,d,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    scanf("\n%d",&d);
    rot(arr[n],d);
    return 0; }
int rot(int arr[n],int d) {
    int j,k;
    for(j=n;j>d;j--) {
        printf("%d ",arr[j]); }
    for(k=0;k<d;k++) {
        printf("%d ",arr[k]); }
    return 0; }