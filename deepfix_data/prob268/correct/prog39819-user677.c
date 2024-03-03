#include <stdio.h>
#include <stdlib.h>
  long sum=0;
long getways(int x, int m) {
    if(m==0) {
        return 0; }
    else {
        sum=sum+((x-(5*m))/3)+1;
        return getways(x,m-1); } }
int main() {
    int n,m;
    scanf("%d",&n);
    m=n/5;
    getways(n,m);
    sum=sum+(n/3)+1;
    printf("%ld",sum);
    return 0; }