#include<stdio.h>
void pro(int n,int i){
    static long long int prod;
    if(i==n+1){
        printf("%lld",prod);
        return ; }
    else{
        int x;
        scanf("%d",&x);
        prod=prod*x;
        pro(n,i+1);
        return; } }
int main() {
    int n;
    scanf("%d",&n);
    return 0; }