#include<stdio.h>
int pro(int a[],int i) {
    if(i==0)
    return a[0];
    else
    return a[i]*pro(a,i-1); }
int main() {
    int n,mul,i;
    int a[100000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    mul=pro(a,n);
    printf("%d",mul);
    return 0; }