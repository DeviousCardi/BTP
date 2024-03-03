#include<stdio.h>
#include<strings.h>
void reverse_arr(int a[10^9], int n) {
    int i, t;
    t=a[n-1];
    for(i=0; i<n; i++) {
        a[i+1]=a[i]; }
    a[0]=t; }
int main() {
    int n, a[10^9],i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    reverse_arr(a, n);
    for(i=0; i<n; i++) {
        printf("%d", &a[i]); }
    return 0; }