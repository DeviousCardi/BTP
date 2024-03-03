#include <stdio.h>
#include <stdlib.h>
  long sum=0;
long getways(int x, int m) {
    if(m==0) {
        return 0; }
    sum=sum+((x-(5*m))/3)+1;
    getways(x,m-1);
    printf("%d %d sum=%ld\n",x,m,sum); }
int main() {
    int n,m;
    long sum=0;
    scanf("%d",&n);
    m=n/5;
    getways(n,m);
    sum=sum+(n/3)+1;
    printf("%ld %d",sum,m);
    return 0; }