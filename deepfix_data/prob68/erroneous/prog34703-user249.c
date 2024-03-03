#include<stdio.h>
int pr(int a[n],int end) {
    int res=1;
    if(end==n) return res;
    return res=res*pr(a[],end+1); }
int main() {
    int n,i;
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        getchar(); }
    printf("%d",pr(num[n],0));
    return 0; }