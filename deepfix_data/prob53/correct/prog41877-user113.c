#include<stdio.h>
long long int i=0,a,b;
long long int diff(long long int n) {
    if(i<n){
        if(i==0)
          scanf("%lld",&a);
        else scanf("%lld",&b);
        a=a-b;
        i++;
        diff(n); }
    return a; }
int main() {
    long long int n;
    scanf("%lld\n",&n);
    printf("%lld",diff(n));
    return 0; }