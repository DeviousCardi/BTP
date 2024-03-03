#include<stdio.h>
#include<strings.h>
int rev(int a[],int size) {
    static int j=0;
    int b[size],i;
    i=size-1;
    if(size==1) {
        return a[i]; }
    b[j]=a[i];
    j++;
    return rev(a,i-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    rev(a,n);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }