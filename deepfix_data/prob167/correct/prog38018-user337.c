#include<stdio.h>
int add(int ary[],int m) {
    static int sum=0,n;
    if(m==0)
    return 0;
    sum=sum+ary[m-1];
    n=m-1;
    add(ary[m-1],n);
    return sum; }
int main() {
    int m;
    scanf("%d",&m);
    int ary[m-1],i;
    for(i=0;i<m;i++) {
        scanf("%d",&ary[i]); }
    int S;
    S=add(ary,m);
    printf("%d",S);
    return 0; }