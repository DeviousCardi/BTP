#include<stdio.h>
int n;
int product(int i,int prod,int a[]) {
    int j=i+1;
    prod*=a[i];
    if(j>n-1)
        return prod;
    else
        return prod*product(j,prod,a); }
int main() {
    int i;
    int prod=1;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    i=0;
    printf("%d",product(i,prod,a));
    return 0; }