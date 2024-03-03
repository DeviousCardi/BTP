#include<stdio.h>
#include<stdlib.h>
int main (){
    int i,n,j,k,rsum,ksum,t[100],m,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    for(i=0;i<n;i++){
        rsum=0;
        p=1;
        for(j=0;j<p;j++)
            rsum=rsum+t[j];
            ksum=0;
            m=n-1;
            for(k=n-1;k>=m;k--)
              ksum=ksum+t[k];
              if(rsum>ksum)
              m--;
              else if(rsum<ksum)
              p++; }
              printf("%d %d",p,m-1);
    return 0; }