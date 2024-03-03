#include<stdio.h>
#include<strings.h>
int chan(int a[],int n) {
    if(n==1) {
        return a[0]; }
    else {
        printf("%d",chan(a,n-1)); } }
int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    chan(a,n);
    return 0; }