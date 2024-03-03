#include<stdio.h>
#include<strings.h>
void recurse(int a[],int n);
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    recurse(a,n);
    return 0; }
void recurse(int a[],int n) {
    if (n<0)
    return;
    else
    printf("%d ",a[n-1]);
    recurse(a,n-1);
    return; }