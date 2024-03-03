#include <stdio.h>
int n , arr[3]={1,3,5};
long getways(int x, int m){
    if(x < 0)   return 0;
    if(m==1 || x==0)    return 1;
    return  getways(x-arr[m-1],m) + getways(x,m-1); }
int main(){
    scanf("%d",&n);
    printf("%ld",getways(n,3)); }