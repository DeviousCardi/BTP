#include <stdio.h>
int main(){
 int n,x,i,sum;
 sum = 0;
 scanf("%d", &n);
 for(i=0;i<4;i++){
     x = n%10;
     n = n/10;
     sum = sum + x; }
     for(i=2016;i<3000;i++){
         if(i%sum == 0){
             break; } }
     printf("%d", sum);
    return 0; }