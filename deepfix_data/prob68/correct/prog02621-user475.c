#include<stdio.h>
int product(int num1,int num2,int i,int prod,int a[]) {
    prod=num1*num2;
    if(i<1)
        return prod;
    else
        return prod*product(*(a+i),*(a+i-1),i--,prod,a); }
int main() {
    int n,i;
    int prod=1.0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    i=n-1;
    printf("%d",product(*a,*(a+1),i,prod,a));
    return 0; }