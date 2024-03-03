#include <stdio.h>
#include <stdlib.h>
int fun_b(int n,int k){
    if(n<k)return 0;
    if(n==0&&k==0)return 1;
    if(k==0)return 1;
    return fun_b(n-1,k)+fun_b(n-1,k-1); }
int main() {
    int n,k,b;
    scanf("%d",&b);
    for(n=20;n>0;n--){
        for (k=20;k>0;k--){
            if(fun_b(n,k)==b)break;
        }if(k!=0)break; }
    if(n!=0&&k!=0)printf("%d %d",n,n-k);
	return 0; }