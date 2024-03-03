#include <stdio.h>
int main(){
    int sum=0,b=1,i,n,j,a;
    scanf("%d",&n);
    for(i=0;i<4;i++)
    { b=b*10;
    a=(n%b);
    sum=sum+a; }
     for(j=n;j>n;j++) {
         if(j%sum==0) {
         printf("%d",j);
         break; } }
    return 0; }