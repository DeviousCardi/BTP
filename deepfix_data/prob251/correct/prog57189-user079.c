#include<stdio.h>
#include<stdlib.h>
int money[3];
int ways(int n,int m) {
    if(n==0) {
        return 1; }
    if(n<0) {
        return 0; }
    money[m]++;
    return ways(n-1,1)+ways(n-3,3)+ways(n-5,5); }
int main()
{   int ans,n,i;
    scanf("%d",&n);
    ans=ways(n,0);
    printf("%d",ans);
    return 0; }