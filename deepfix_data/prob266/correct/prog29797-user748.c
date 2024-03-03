#include <stdio.h>
int main(){
           int n;
           scanf("%d",&n);
        int i,j,k,l;
        for(i=1;i<=n;i=i+1){
         for(j=1;j<=n;j=j+1){
     for(k=1;k<=n;k=k+1){
        for(l=1;l<=n;l=l+1){
        int m;
        m=i+j+k+l;
            if(n%m==0)
            printf("%d ",n); } } } }
    return 0; }