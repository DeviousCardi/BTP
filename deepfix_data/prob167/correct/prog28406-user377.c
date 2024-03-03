#include<stdio.h>
int add(int ans, int i,int n) {
    int d;
    if(i==n+1) {
        printf("%d",ans);
    return ans; }
    scanf("%d",&d);
    ans=ans+d;
    add(ans,i+1,n); }
int main() {
    int n;
    scanf("%d",&n);
    return 0; }