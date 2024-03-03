#include<stdio.h>
int a[100];
int count=1,n;
int pro(int n) {
    count=count*a[n];
    if(N==0)
    return count;
    return pro(n-1); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int c=pro(n);
    printf("%d",c);
    return 0; }