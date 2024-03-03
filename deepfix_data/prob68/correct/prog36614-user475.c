#include<stdio.h>
int n;
int product(int num1,int i,int prod,int a[]) {
    prod*=num1;
    int j=i;
    if(j>n-1)
        return prod;
    else
        return prod*product(*(a+j),i++,prod,a); }
int main() {
    int i;
    int prod=1;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    i=0;
    printf("%d",product(*a,i,prod,a));
    return 0; }