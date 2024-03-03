#include<stdio.h>
int main() {
    scanf("%d",&n);
    int i=0,a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int pr=product(a,0,n-1);
    printf("%d",pr);
    return 0; }
int product(int a[],int start,int end) {
    if(start==end-1)
    return p;
    else {
    p=a[start]*a[start+1];
    return p; }
    product(a,start+1,end); }