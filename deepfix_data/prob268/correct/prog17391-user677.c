#include <stdio.h>
#include <stdlib.h>
  long sum=0;
long getways(int x, int m) {
    if(m==0) {
        return 0; }
    sum=sum+((x-(5*m))/3)+1;
    getways(x,m-1);
    printf("%d %d\n",x,m); }
int main() {
    int n;
    long sum=0;
    scanf("%d",&n);
    getways(n,n/5);
    sum=sum+(n/3)+1;
    printf("%ld",sum);
    return 0; }