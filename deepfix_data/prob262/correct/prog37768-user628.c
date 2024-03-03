#include<stdio.h>
#include<strings.h>
void swap(int *a,int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return; }
void reverse(int a[],int n,int pos,int pos1,int mid) {
    swap(a+pos,a+pos1);
    reverse(a,n,pos+1,pos1-1,mid); }
int main() {
    int n,i,mid;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    mid=n/2;
    reverse(a,n,0,n,mid);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }