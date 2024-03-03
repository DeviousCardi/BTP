#include<stdio.h>
#include<strings.h>
void reverse(int n,int a[]) {
     printf("%d ",a[n-1]);
    if(n>1)
    reverse(n-1,a);
    else
    return; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
     scanf(" %d",&a[i]);
    reverse(n,a);
    return 0; }