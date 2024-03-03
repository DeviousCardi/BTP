#include<stdio.h>
int diff(int n,int a[]);
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    printf("%d",diff(n,a));
    return 0; }
int diff(int n,int a[]) {
    static int i=0;
    if(i>=n) {
        return 0; }
    else {
        scanf("%d ",&a[i]);
        i+=1;
        return -diff(n,a)+a[i-1]; } }