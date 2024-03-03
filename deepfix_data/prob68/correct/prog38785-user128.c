#include<stdio.h>
 long long int prod=1;
void pro(int n,int i){
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