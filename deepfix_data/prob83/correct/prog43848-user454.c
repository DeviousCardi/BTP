#include <stdio.h>
void swap(int a[],int d,int n,int j) {
    int x=a[j],y=0;
    a[j]=a[n-d];
    for(int i=1+j;i<=n-d;i++) {
        y=a[i];
        a[i]=x;
        x=y; } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        swap(a,m-i,n,i); }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }