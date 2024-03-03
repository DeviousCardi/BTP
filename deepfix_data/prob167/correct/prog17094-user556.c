#include<stdio.h>
int n;
int sum(int i,long int s)
{ long int a;
    if(i==n)
    {printf("%ld ", s);
        return s;}
    else {
        scanf("%ld",&a);
        s=s+a;
        sum(++i,s); } }
int main() {
 scanf("%d",&n);
 long int t=sum(0,0);
    printf("%ld",t);
    return 0; }