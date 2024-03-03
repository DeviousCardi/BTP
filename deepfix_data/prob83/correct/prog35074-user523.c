#include <stdio.h>
int n;
int arr[1000];
void rot(int n) {
    int m,i;
    m=arr[n-1];
    for(i=n-2;i>=0;i--) {
        arr[i+1]=arr[i]; }
    arr[0]=m; }
int main() {
    int n,d,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(j=1;j<=d;j++) {
        rot(n); }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    return 0; }