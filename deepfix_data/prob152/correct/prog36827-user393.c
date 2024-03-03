#include <stdio.h>
int sum(int a[],int n,int i) {
    int s=0;
    if(i==n)
    return s;
    else
    s=a[i]+sum(a,n,i+1);
    return s; }
int main() {
    int a[]={1,2,3,4,5};
    printf("%d",sum(a,0,5));
    return 0; }