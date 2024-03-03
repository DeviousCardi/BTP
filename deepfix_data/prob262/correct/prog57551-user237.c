#include<stdio.h>
#include<strings.h>
void reverse(int n,int po[]) {
    if(n==0)
    return;
    printf("%d ",po[n-1]);
    reverse(n-1,po);
    return; }
int main() {
   int n;
   scanf("%d",&n);
   int i,a[n];
   for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
   reverse(n,a);
    return 0; }