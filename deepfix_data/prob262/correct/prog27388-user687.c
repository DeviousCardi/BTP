#include<stdio.h>
#include<strings.h>
void print(int a[], int n) {
    if(n==-1) {
        return; }
    printf("%d ",a[n]);
    print(a,n-1); }
int main() {
    int a[100000], n, i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    print(a,n-1);
    return 0; }