#include<stdio.h>
int a[100];
int count=1;
int pro(int N) {
    count=count*a[N];
    if(N==1)
    return a[N];
    else
    return pro(N-1); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int c=pro(n);
    printf("%d",c);
    return 0; }