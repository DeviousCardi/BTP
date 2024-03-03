#include<stdio.h>
long int add(long int ary[],long int m) {
    static long int sum=0,n;
    if(m==-1)
    return sum;
    sum=sum+ary[m-1];
    n=m-1;
    add(ary,n);
    return sum; }
int main() {
    long int m;
    scanf("%ld",&m);
    long int ary[m-1],i;
    for(i=0;i<m;i++) {
        scanf("%d",&ary[i]); }
    long int S;
    S=add(ary,m);
    printf("%ld",S);
    return 0; }