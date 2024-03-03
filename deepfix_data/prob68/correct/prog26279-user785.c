#include<stdio.h>
#include<math.h>
#include<limits.h>
int product(int t, long long pro){
    long long a;
    if(t == 0){
        return pro; }
    scanf("%lld",&a);
    pro =a*pro;
    pro = product(t-1, pro);
    return pro; }
int main()
{   long long p = 1;
    long long n;
    scanf("%lld",&n);
    p = product(n,p);
    return 0; }