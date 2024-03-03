#include <stdio.h>
void fun(int);
int main() {
    int n,d,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        if(i+d<n-1)
        fun(a[i+d]);
        if(i+d>n-1)
        fun(a[i+d-n]) }
    return 0; }
void fun(int x) {
    printf("%d",x); }