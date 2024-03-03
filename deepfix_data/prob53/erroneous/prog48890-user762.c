#include<stdio.h>
int diff(int ,int a[]);
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    printf("%d",diff(n,a[n]));
    return 0; }
int diff(int n;int a[]) {
    static int i=0;
    if(i>=n) {
        return 0; }
    else {
        scanf("%d",&a[i++]);
        return a[i-1]-diff(n,a[n]); } }