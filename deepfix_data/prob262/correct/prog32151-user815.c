#include<stdio.h>
#include<strings.h>
void reverse(int n, int a[]) {
    if(n>1) reverse(n-1, a+1);
    printf("%d ",a[0]); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    reverse(n,a);
    return 0; }