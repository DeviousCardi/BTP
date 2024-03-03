#include<stdio.h>
#include<strings.h>
int rev(int a[],int size) {
    int i=size-1,j=0,temp;
    if(size==1) {
        return a[0]; }
    if(size>1) {
        temp=a[size-1-i];
        a[size-1-i]=a[i];
        a[i]=temp;
        return rev(a,i-1); } }
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