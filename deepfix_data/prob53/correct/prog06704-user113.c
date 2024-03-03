#include<stdio.h>
long int i=0,a,b;
long int diff(long int n) {
    if(i<n){
        if(i==0)
          scanf("%ld ",&a);
        else scanf("%ld ",&b);
        a=a-b;
        i++;
        diff(n); }
    return a; }
int main() {
    int long n;
    scanf("%ld",&n);
    printf("%ld",diff(n));
    return 0; }