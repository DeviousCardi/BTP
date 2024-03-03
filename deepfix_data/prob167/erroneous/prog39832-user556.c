#include<stdio.h>
int n;
int sum(int i,long int s)
{ long int a;
    if(i==n)
        return s;}
    else {
        s+=scanf("%ld",&a);
        printf("%ld",a);
        sum(++i,s); } }
int main() {
 scanf("%d",&n);
 long int s=sum(0,0);
    printf("%ld",s);
    return 0; }