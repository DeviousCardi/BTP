#include<stdio.h>
#include<strings.h>
void reverse(int a[], int start, int end) {
    if(start <= end ) {
        int t=a[end];
        a[end]=a[start];
        a[start]=t;
        reverse(a,start+1,end-1); } }
int main() {
    int a[10000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    reverse(a,0,n-1);
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }