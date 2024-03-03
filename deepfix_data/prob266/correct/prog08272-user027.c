#include <stdio.h>
int main(){
 int y;
 scanf("%d",&y);
 int sum=0;
 int m=y%10;
 int a=y/10;
 while(a!=0) {
     sum+=m;
     m=a%10;
     a=a/10; }
 printf("%d",sum);
    return 0; }