#include<stdio.h>
#include<strings.h>
int reverse( int a[],int n, int i) {
    if(i<n) {
        reverse(a,n,i+1);
        printf("%d",a[i]); }
    else return 0; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    return 0; }