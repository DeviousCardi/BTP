#include <stdio.h>
void rotate(int n,int d,int *a);
int main() {
    int n,i,d;
    scanf("%d",&n);
    int a[10];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    rotate(n,d,a);
    for(i=0;i<n;i++) {
        a[i]=a[i+n-d];
        printf("%d ",a[i]); }
    return 0; }
void rotate(int n,int d,int *a) {
    int temp,i;
    for(i=0;i<n-d;i++) {
        temp=a[i];
        a[i]=0;
        a[i+n]=a[i]; } }