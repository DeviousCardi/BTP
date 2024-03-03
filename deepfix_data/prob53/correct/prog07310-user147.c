#include<stdio.h>
int arrdiff(int a[1000000000],int initial, int n) {
    static int i=0,diff;
    diff=a[0];
    if(i==n)
    return diff;
    else {
        diff=diff-a[i];
        i++;
        return(a,i,n); } }
int main() {
    long int n;
    int a[1000000000];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int diff;
    diff=arrdiff(a,0,n);
    printf("%d",diff);
    return 0; }