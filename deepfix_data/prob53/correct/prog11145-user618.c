#include<stdio.h>
int n, a[1000];
int diff(int);
int main() {
    scanf("%d/n",&n);
    int d;
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    d=diff(n);
    printf("%d",d);
    return 0; }
int diff(int x) {
    int f;
    if (x==1)
        return(a[0]);
    else
    if (x>0) {
        f=(diff(x-1)-a[x-1]);
        return(f); } }