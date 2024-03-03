#include<stdio.h>
int arrdiff(int a[],int initial, int n) {
    static int i=0,diff;
    i=initial;
    if(i==n)
    return diff;
    else if(i==0) {
        diff=a[0]; }
    else {
        diff=diff-a[i];
        i++;
        return arrdiff(a,i,n); } }
int main() {
    long int n;
    scanf("%ld\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int diff;
    diff=arrdiff(a,0,n);
    printf("%d",diff);
    return 0; }