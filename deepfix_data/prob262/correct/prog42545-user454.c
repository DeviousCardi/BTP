#include<stdio.h>
#include<strings.h>
void rev(int a[],int n,int i) {
    if(i>(n/2)-1)
    return;
    int t=0;
    t=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=t;
    rev(a,n,i+1); }
int main() {
    int n,j=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    rev(a,n,j);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }