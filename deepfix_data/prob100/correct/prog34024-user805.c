#include<stdio.h>
#include<limits.h>
int max(int a,int b){
if(a>b)
return a;
else return b; }
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int n,m,h,k,i;
    scanf("%d%d",&n,&m);
    h=max(n,m);
    printf("%d",h);
    return 0; }