#include<stdio.h>
int differ(int n,int a[]);
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    printf("%d",differ(n,a));
    return 0; }
int differ(int n,int a[]) {
    static int i=0;
    if(i>=n) {
        return 0; }
    else if(i==0) {
        scanf("%d ",&a[i]);
        i+=1;
        return a[i-1]+differ(n,a); }
    else {
        scanf("%d ",&a[i]);
        i+=1;
        return -a[i-1]-differ(n,a); } }