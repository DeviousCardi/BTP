#include<stdio.h>
#define max 100000;
long int n;
int a[max];
int arrdiff(int a[],int diff) {
    static int i=1;
    if(i<n) {
        diff-=a[i];
        i++;
        return arrdiff(a[],diff); }
    else {
        return diff; } }
int main() {
    int diff;
    scanf("%ld\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int k=a[0];
    diff=arrdiff(a,k);
    printf("%d",diff);
    return 0; }