#include<stdio.h>
void pro(int n,int i){
    static prod;
    if(i==n+1)
        return ;
    else{
        int x;
        scanf("%d",&x);
        prod=prod*x;
        pro(n.i+1);
        return; } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",pro(n,1);
    return 0; }