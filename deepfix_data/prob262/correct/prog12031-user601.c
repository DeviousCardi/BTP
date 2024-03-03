#include<stdio.h>
#include<strings.h>
int rev(int a[],int size) {
    int i=size-1,temp;
    if(i==0) {
        return a[0]; }
    if(i>0) {
        temp=a[size-1-i];
        a[size-1-i]=a[i];
        a[i]=temp;
        i--;
        return rev(a,i); } }
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