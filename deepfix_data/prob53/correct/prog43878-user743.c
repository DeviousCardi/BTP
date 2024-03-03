#include <stdio.h>
long int difference(long int num[],long int n) {
    long int static sum=0;
    sum=sum+num[n-1];
    if(n==1)
    return sum;
    difference(num,n-1); }
int main() {
    long int n;
    scanf("%ld",&n);
    long int num[n];
    for(int i=n-1;i>=0;i--) {
        scanf("%ld",&num[i]);
        if(i!=(n-1)) {
        num[i]=(-1)*num[i]; } }
     long int sum=difference(num,n);
    printf("%ld",sum);
    return 0; }