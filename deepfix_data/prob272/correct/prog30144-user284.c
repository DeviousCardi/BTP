#include <stdio.h>
int main(){
    int a1,a2,n;
    int i,j,k,t;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
 j=a2;
 k=a1;
 for(i=3;i<=n;i++) {
     t=j;
     j=j+k-2;
     k=t; }
 printf("%d",j);
     return 0; }