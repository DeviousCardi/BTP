#include<stdio.h>
int product(int num1,int num2,int i,int prod) {
    prod=num1*num2;
    if(i<1)
        return prod;
    else
        return product(*(a+i),*(a+i-1),i--,prod); }
int main() {
    int n,i;
    float prod=1.0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    i=n-1;
    printf("%f",product(*a,*(a+1),i,prod));
    return 0; }