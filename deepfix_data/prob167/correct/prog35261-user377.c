#include<stdio.h>
int add(int ans, int i,int n) {
    int d;
    if(i==n+1)
    return ans;
    scanf("%d",&d);
    ans=ans+d;
    add(ans,i+1,n); }
int main() {
    int n,sum;
    scanf("%d",&n);
    sum=add(0,1,n);
    printf("%d",sum);
    return 0; }