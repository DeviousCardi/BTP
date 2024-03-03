#include<stdio.h>
int b=0;
long int a=1;
int product(int *num[],int n) {
    if(b==n)
        return a;
    return a*product(++num,n); }
int main() {
    long int n;
    scanf("%ld",&n);
    int  num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    a=product(*num,n);
    printf("%ld",a);
    return 0; }