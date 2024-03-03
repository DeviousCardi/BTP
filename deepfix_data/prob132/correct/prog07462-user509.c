#include <stdio.h>
int fun(int n){
    if(n==0) return 1;
    if(n==1) return 2;
     return fun(n-1)+fun(n-2); }
int main(){
    int t,p;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%d",&n);
        p=fun(n);
        printf("%d\n",p);
        p=0; }
    return 0; }