#include<stdio.h>
int main(){
    int n,x,k,t;
    scanf("%d%d",&n,&k);
    int array[n];
    for(x=0;x<n;x++){
        scanf("%d",&array[x]);
        if (array[x]>array[x-1])
        t=array[x];
        printf("%d",t); }
return 0; }