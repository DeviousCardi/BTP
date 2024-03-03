#include <stdio.h>
#include <stdlib.h>
  long sum=0;
long getways(int x, int m) {
    if(m==0) {
        return 0; }
    sum=sum+((n-(5*m))/3)+1;
    getways(n,m-1); }
int main() {
    long n,sum=0,i;
    scanf("%ld",&n);
    getways(n,n/5);
    sum=sum+(n/3)+1;
    printf("%ld",sum);
    return 0; }