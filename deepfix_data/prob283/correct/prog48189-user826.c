#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0&&n==0)
    return A(m-1,1);
    else if(m>0&&n>0)
    return A(m-1,A(m,n-1)); }
int main() {
    int k,m,n,count=0;
    scanf("%d",&k);
   for(m=0;m<4;m++)
   {for(n=0;n<6;n++){
       if(A(m,n)==k){
           count++;
    printf("%d %d",m,n);
           break; }
      if(count>0)
      break; } }
    if(count==0)
    printf("-1");
    return 0; }