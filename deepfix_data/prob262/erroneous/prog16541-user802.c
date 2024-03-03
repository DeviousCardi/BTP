#include<stdio.h>
#include<strings.h>
int main() {
    rev(int a[]); {
    int i,n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    printf("%d ",rev(a[i])); }
int rev(int a[]) {
    int n=0,j;
    if(n==1)
    return (a[0]);
    else
    for(j=n;j<0;j++)
    return (a[j]); }
return 0; }