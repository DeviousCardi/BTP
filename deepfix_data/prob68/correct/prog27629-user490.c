#include<stdio.h>
int a[100];
int count=1,n;
int pro(int n) {
    count=(count*a[n-1]);
    if(n==0)
    return count;
    else
    return pro(n-1); }
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int c=pro(n);
    printf("%d",c); }