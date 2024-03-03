#include<stdio.h>
long double prod(long double num[],long double n,int start,long double p) {
    p=p*num[start];
    if(start==n-1)
    return p;
    else
    return prod(num,n,start+1,p); }
int main() {
int n;
scanf("%d\n",&n);
long double num[n],p;
for(int i=0;i<n;i++)
scanf("%ld",&num[i]);
p=prod(num,n,0,1);
printf("%ld",p);
    return 0; }