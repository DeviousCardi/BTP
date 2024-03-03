#include<stdio.h>
int add(int ary[],int m) {
    static int sum=0,n;
    if(m==-1)
    return sum;
    sum=sum+ary[m-1];
    n=m-1;
    add(ary,n);
    return sum; }
int main() {
    int m;
    scanf("%d",&m);
    int ary[m-1],i;
    for(i=0;i<m;i++) {
        scanf("%d",&ary[i]); }
    long int S;
    S=add(ary,m);
    printf("%ld",S);
    return 0; }