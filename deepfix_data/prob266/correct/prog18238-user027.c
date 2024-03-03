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
     int i=1;
 while(y%sum!=0) {
     y=y+i;
     i=i+1; }
 printf("%d",y);
    return 0; }