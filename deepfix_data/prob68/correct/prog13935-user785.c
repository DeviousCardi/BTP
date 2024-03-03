#include<stdio.h>
#include<math.h>
#include<limits.h>
int product(int t, long pro){
    long a;
    if(t == 0){
        return pro; }
    scanf("%ld",&a);
    pro =a*pro;
    pro = product(t-1, pro);
    return pro; }
int main()
{   long p = 1;
    long n;
    scanf("%ld",&n);
    p = product(n,p);
    printf("%d",INT_MAX);
    return 0; }