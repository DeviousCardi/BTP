#include<stdio.h>
#include<strings.h>
int chan(int a[],int n) {
    if(n==1)
    printf("%d",a[0]);
    else {
        printf("%d in ",n);
        printf("%d",chan(a,n-1));
        printf("%d out ",n); } }
int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    chan(a,n);
    return 0; }