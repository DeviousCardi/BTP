#include<stdio.h>
long long double prod(long long double num[],long long double n,long long double start,long long double p) {
    p=p*num[start];
    if(size==n-1)
    return p;
    else
    return prod(num,n,start+1,p); }
int main() {
long long double n,p;
scanf("%d\n",&n);
long long double num[];
for(int i=0;i<n;i++)
scanf("%d ",&num[i]);
p=prod(num,n,1);
printf("%d",p);
    return 0; }