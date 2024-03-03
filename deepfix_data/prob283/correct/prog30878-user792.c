#include <stdio.h>
#include <stdlib.h>
int ackm(int m , int n){
    int k;
    if(m==0)
     return n+1;
    else if(m>0&&n==0)
       { return ackm(m-1,1); }
       else
       {return ackm(m-1,ackm(m,n-1));}
    if(ackm(m,n)==k)
     printf("%d %d\n",m,n);
    else printf("-1"); }
int main(){
    int m,n,k;
    scanf("%d",&k);
    int ackm(m,n);
    ackm(m,n);
    return 0; }