#include<stdio.h>
#include<strings.h>
void reverse(int n, int a[]) {
    if(n==1) printf("%d",a[n]);
    else reverse(n-1, a+1);
    return; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    reverse(n,a);
    return 0; }