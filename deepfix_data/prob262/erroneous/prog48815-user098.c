#include<stdio.h>
#include<strings.h>
void reverse(int a[], int start,int n) {
    if(start == n-1 )
    else {
        reverse(a,start+1);
        printf("%d",a[start]); } }
int main() {
    int a[10000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    reverse(a,0,n);
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }