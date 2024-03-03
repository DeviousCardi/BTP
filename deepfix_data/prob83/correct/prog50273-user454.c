#include <stdio.h>
void swap(int a[],int d,int n) {
    int x=a[0],y=0;
    a[0]=a[n-d];
    for(int i=1;i<n-d;i++) {
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
    swap(a,m,n);
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }