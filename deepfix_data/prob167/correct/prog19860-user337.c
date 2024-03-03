#include<stdio.h>
int add(int ary[],int m) {
    static sum=0,n;
    if(m==0)
    return sum;
    sum=sum+ary[m-1];
    n=m-2;
    add(ary[n],n);
    return sum; }
int main() {
    int m;
    scanf("%d",&m);
    int ary[m],i;
    for(i=0;i<m;i++) {
        scanf("%d",&ary[i]); }
    int S;
    S=add(ary,m-1);
    printf("%d",S);
    return 0; }