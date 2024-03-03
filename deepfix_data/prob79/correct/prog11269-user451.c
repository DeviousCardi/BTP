#include<stdio.h>
#include<stdlib.h>
int main (){
    int i,n,j,k,rsum,ksum,t[100];
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            rsum=rsum+t[j];}
            for(k=n-1;k<n-i;k++){
              ksum=ksum+t[k];}
              if(rsum>ksum)
              printf("%d %d",i,n-i); }
    return 0; }