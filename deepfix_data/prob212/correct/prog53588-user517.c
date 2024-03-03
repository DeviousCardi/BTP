#include <stdio.h>
int main() {
 int n,i,r,s;
 scanf("%d",&n);
    for(s=0;n!=0;n=n/10){
        r=n%10;
        s=s+r; }
    for(i=2016;i%s==0;i=i-1){ }
 printf("%d",i);
    return 0; }