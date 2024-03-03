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
    if(b==0)printf("%d %d",0,1);
    else if (b==1)printf("%d %d",0,0);
    else
    {for(n=20;n>0;n--){
        for (k=0;k<=20;k++){
            if(fun_b(n,k)==b)break;
        }if(k!=20)break; }
    if(n!=0&&k!=20)printf("%d %d",n,k);
    else printf("-1"); }
    int x=fun_b(20,9);
	return 0; }