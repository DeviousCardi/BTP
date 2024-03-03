#include<stdio.h>
int n;
void sum(int i,long int s)
{ long int a;
    if(i==n)
    {printf("%ld ", s); }
    else
    {printf("%ld ",s);
        scanf("%ld",&a);
        s=s+a;
        sum(++i,s); } }
int main() {
 scanf("%d",&n);
 sum(0,0);
    return 0; }