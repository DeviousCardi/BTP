#include<stdio.h>
#include<stdlib.h>
int main (){
    int i,n,j,k,rsum,ksum=0,t[100],m,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    rsum=0;
    for(i=0;i<n;j++){
        for(j=0;j<n;){
            rsum=rsum+t[j];
            for(k=n-1;k>0;){
              ksum=ksum+t[k];
              if(rsum>ksum)
              k--;
              else if(rsum<ksum)
              j++; } } }
              printf("%d %d",p,m);
    return 0; }