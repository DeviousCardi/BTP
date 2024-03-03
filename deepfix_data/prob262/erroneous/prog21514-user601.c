#include<stdio.h>
#include<strings.h>
int rev(int a[],int size) {
    int i=size-1,b[size],j=0;
    if(size==1) {
        return a[]; }
    else {
        b[j]=a[i];
        j++;
        i--;
        return rev(int a[],int size-1); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    rev(a[],n);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }