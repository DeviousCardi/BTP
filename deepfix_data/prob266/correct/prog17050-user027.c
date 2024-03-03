#include <stdio.h>
int main(){
 int y;
 scanf("%d",&y);
 int sum=0;
 int m=y%10;
 int a=y/10;
 while(m!=0) {
     sum+=m;
     m=a%10;
     a=a/10; }
 int abc=y;
 int i=1;
 do{
     abc=abc+i;
     i=i+1; }
 while((abc%sum!=0)&&(i<sum));
 printf("%d",y);
    return 0; }