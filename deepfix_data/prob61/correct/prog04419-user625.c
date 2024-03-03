#include<stdio.h>
int main(){
    int n,x,k,t;
    scanf("%d%d",&n,&k);
    int array[n];
    for(x=0;x<n;x++){
        scanf("%d",&array[x]);
        if (array[x]>array[x-1])
        printf("%d ",array[x-1]);
        else
        printf("%d ",array[x]); }
return 0; }