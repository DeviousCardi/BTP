#include<stdio.h>
int b=0;
long long int a=1;
long long int product(int num[],int n) {
    if(b==n)
        return a;
    a=a*num[b++];
    return a*product(num,n); }
int main() {
    int n;
    scanf("%d",&n);
    int  num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    a=product(num,n);
    printf("%lld",a);
    return 0; }