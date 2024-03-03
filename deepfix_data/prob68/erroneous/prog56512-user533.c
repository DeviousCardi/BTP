#include<stdio.h>
int product(int i,int array[]) {
    int f(i);
    f(i)=f(i-1)*array[i] }
int main() {
    int n,c,i;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    c= product(n,a[n]);
    printf("%d",&c);
    return 0; }