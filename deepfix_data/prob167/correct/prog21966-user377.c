#include<stdio.h>
void add(int ans, int i,int n) {
    int d;
    if(i==n+1) {
        printf("%d",ans);
        return; }
    scanf("%d",&d);
    ans=ans+d;
    add(ans,i+1,n); }
int main() {
    int n;
    scanf("%d",&n);
    add(0,1,n);
    return 0; }