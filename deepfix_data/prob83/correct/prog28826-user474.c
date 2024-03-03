#include<stdio.h>
int rotate(int a[],int n) {
    int i;
    int y;
    int x;
    for(i=0;i<=n-2;i++) {
        y=a[i];
        x=a[i+1];
        a[i+1]=y;
        y=x; } }
int main() {
    int n;
    int i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int d;
    scanf("%d",&d);
    for(i=1;i<=d;i++) {
       int rotate(int a[],int n); }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }