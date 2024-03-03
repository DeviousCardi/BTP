#include <stdio.h>
void rotate(int n,int d,int *a);
int main() {
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    rotate(n,d,a);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }
void rotate(int n,int d,int *a) {
    int temp,i;
    for(i=d-1;i<n;i++) {
        temp=a[i-(d-1)];
        a[i-(d-1)]=a[i];
        a[i]=temp; } }