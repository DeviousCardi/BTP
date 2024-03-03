#include<stdio.h>
int diff(int a[],int n) {
if(n==2) {
     return a[0]-a[1]; }
return diff(a,n-1)-a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int r=diff(a,n);
    printf("%d",r);
    return 0; }