#include<stdio.h>
#include<strings.h>
void rev(int a[],int start,int end) {
    if ((start==end)||(start>end)) return;
    int temp;
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    return rev(a,start+1,end-1); }
int main() {
    int i;
    long int n;
    scanf("%ld",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    rev(a,0,n-1);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }