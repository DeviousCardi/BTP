#include<stdio.h>
int b=0;
int a=1;
int product(int *num[],int n) {
    if(b==n)
        return a;
    return a*product(++num,n); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n);
    int  num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    a=product(*num,n);
    printf("%d",a);
    return 0; }