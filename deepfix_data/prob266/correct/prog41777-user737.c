#include <stdio.h>
int main(){
 int i,n,sum=0;
 scanf("%d",&n);
 for(i=n;i>=1;i--) {
     sum=sum+n%10;
     n=(n-(n%10))/10; }
 i=2016;
 while((i%sum)!=0)
    i++;
    printf("%d",i+1);
    return 0; }