#include<stdio.h>
long int sum(int a[],int h) {
    if(h==0) return 0;
    else {
        int k=h-1;
        return (a[h-1]+sum(a,k)); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%ld",sum(a,n));
    return 0; }