#include<stdio.h>
int diff(int[],int,int);
int main() {
    int a[100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    j=diff(a,0,n);
    printf("%d",j);
    return 0; }
int diff(int a[100],int i,int n) {
    if(n-1==0) {
        return a[0]; }
    else {
        return diff(a,i,n-1)-a[n]; } }