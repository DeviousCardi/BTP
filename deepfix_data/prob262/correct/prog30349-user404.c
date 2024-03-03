#include<stdio.h>
#include<strings.h>
void reverse(int a[]   ,int n);
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    reverse( a[n],n);
    return 0; }
void reverse(int a[] ,int n) {
    int i;
    for(i=0;i<n;i++)
    printf("%d",a[i]); }